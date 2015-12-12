/*************************************************************************
TPLog  -  fichier main
-------------------
début                : 23/11/2015 14:30:19
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

#include "GraphDocuments.h"
#include "NombreDeHits.h"
#include "LogParser.h"

#include <string>
#include <iostream>
#include <fstream>
using namespace std;


#ifdef TEST

#include "TestLog.h"

int main()
// Algorithme
//
{
    test_LogParser_Parser();
    return 0;
}//----- Fin de Main

#else

const int NB_DOC = 10;

void defaut ( GraphDocuments & graph, int n );
void creerFichierGraphe ( const GraphDocuments & graph, const string & nomFichierGraphe );
void initialiserGraphe (GraphDocuments & graph, const string & fichierLog);
void defautAvecExclusion ( const string & nomFichierLog );
void defautPourUneHeure ( const string & nomFichierLog, int heure );

//faire une fonction man de ce programme si erreur commande


int main (int argc, char* argv[])
{
    string nomFichierLog = "";
    string nomFichierGraph = "";
    string serverAdress = "";
    int heure = -1;
    bool exclusion = false;

    cout << "argc = " << argc << endl;

    if ( argc < 3 )
    {
        cerr << "Commande invalide." << endl;
        exit(1);
    }
    else
    {
        nomFichierLog = argv[argc-2];
        serverAdress = argv[argc-1];
    }

    for (int i = 1; i < argc - 2; i++){
        if (strcmp(argv[i],"-g")==0)
        {
            i++;
            if ( i < argc - 2 )
            {
                nomFichierGraph = argv[i];
            }
            else
            {
                cerr << "Commande invalide." << endl;
                exit(1);
            }
        }
        else if (strcmp(argv[i],"-e")==0)
        {
            exclusion = true;
        }
        else if (strcmp(argv[i],"-t")==0)
        {
            i++;
            if ( i < argc - 2 )
            {
                if ( sscanf(argv[i],"%d",&heure) != 1 && heure < 0 && heure > 24 )
                {
                    cerr << "Commande invalide." << endl;
                    exit(1);
                }
            }
            else
            {
                cerr << "Commande invalide." << endl;
                exit(1);
            }
        }
        else
        {
            cerr << "Commande invalide." << endl;
            exit(1);
        }
    }


//    cout << "nomFichierLog : " << nomFichierLog << endl;
//    cout << "nomFichierGraph : " << nomFichierGraph << endl;
//    cout << "serverAdress : " << serverAdress << endl;
//    cout << "heure : " << heure << endl;
//    cout << "exclusion : " << exclusion << endl;

    GraphDocuments graph(serverAdress);

    initialiserGraphe(graph,nomFichierLog);

    creerFichierGraphe(graph, nomFichierGraph);

    defaut (graph, NB_DOC);


	return 0;
}


void defaut ( GraphDocuments & graph , int n)
{
    int i = 0;
    graph.TrierParNombreDeHitsReussis();
    const vector<Document*> documents = graph.Documents();
    vector<Document*>::const_iterator itv = documents.begin();

    while ( itv != documents.end() && i < n )
    {
        cout << (*itv)->CheminAccesRessource() << " : " << (*itv)->NbHits().NombreDeHitsTotal() <<endl;
        itv++;
        i++;
    }
}

void creerFichierGraphe ( const GraphDocuments & graph, const string & nomFichierGraphe )
{
    ofstream fichier(nomFichierGraphe,ios::out | ios::trunc);
    if(fichier)
    {
        fichier << "digraph {" << endl;

        const vector<Document*> documents = graph.Documents();
        int i = 0;
        map<Document*,int> positions;

        for ( vector<Document*>::const_iterator itv = documents.begin(); itv != documents.end(); itv++, i++)
        {
            fichier << "node" << i << "[label=\"" << (*itv)->CheminAccesRessource() << "\"];" << endl;
            positions.insert(make_pair((*itv),i));
        }

        for ( vector<Document*>::const_iterator itv = documents.begin(); itv != documents.end(); itv++ )
        {
            for ( map<Document*,NombreDeHits>::const_iterator itm = (*itv)->DocumentsAtteignables().begin(); itm != (*itv)->DocumentsAtteignables().end(); itm++ )
            {
                if ( itm->second.NombreDeHitsTotal(true) > 0 )
                {
                    fichier << "node" << positions[(*itv)] << " -> " <<
                          "node" << positions[itm->first] << " [label=\"" <<
                          itm->second.NombreDeHitsTotal(true) << "\"];" << endl;
                }
            }
        }
        fichier << "}" << endl;
        fichier.close();
    }
    else
    {
        cerr << "Impossible d'ouvrir " << nomFichierGraphe << " !" <<endl;
    }
}


void initialiserGraphe (GraphDocuments & graph, const string & fichierLog)
{
    ifstream fichier(fichierLog,ios::in);
    if(fichier)
    {
        string logLine;
        while ( getline(fichier, logLine) )
        {
            graph.TraiterLogLine(logLine);
        }
        fichier.close();
    }
    else
    {
        cerr << "Impossible d'ouvrir " << fichierLog << " !" <<endl;
    }
}

void defautAvecExclusion ( const string & nomFichierLog )
{
}

void defautPourUneHeure ( const string & nomFichierLog, int heure )
{
}

#endif
