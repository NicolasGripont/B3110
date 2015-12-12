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



using namespace std;

void defaut ( const string & nomFichierLog );
void creerFichierGraphe ( const GraphDocuments & graph, const string & nomFichierGraphe );
GraphDocuments* creerGraphe ( const string & fichierLog, const string & serverAdress  );
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

    GraphDocuments * graph = creerGraphe(nomFichierLog,serverAdress);

    creerFichierGraphe(*graph, nomFichierGraph);

    delete graph;

	return 0;
}


void defaut ( string nomFichierLog )
{
    cout<<"defaut"<<endl;
}

void creerFichierGraphe ( const GraphDocuments & graph, const string & nomFichierGraphe )
{
    cout<<"creerGraphe"<<endl;
    ofstream fichier(nomFichierGraphe,ios::out | ios::trunc);
    if(fichier)
    {
        fichier << "digraph {" << endl;

        const vector<Document*> documents = graph.Documents();

        for ( vector<Document*>::const_iterator itv = documents.begin(); itv != documents.end(); itv++ )
        {
            fichier << (*itv)->CheminAccesRessource() << ";" << endl;
            for ( map<Document*,NombreDeHits>::const_iterator itm = (*itv)->DocumentsAtteignables().begin(); itm != (*itv)->DocumentsAtteignables().end(); itm++ )
            {
                fichier << (*itv)->CheminAccesRessource() << " -> " <<
                      itm->first->CheminAccesRessource() << " [label=\"" <<
                      itm->second.NombreDeHitsTotal(true) << "\"];" << endl;
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


GraphDocuments* creerGraphe (const string & fichierLog , const string & serverAdress )
{
    cout<<"creerGraphe"<<endl;
    GraphDocuments *graph = new GraphDocuments(serverAdress);
    ifstream fichier(fichierLog,ios::in);
    if(fichier)
    {
        string logLine;
        while ( getline(fichier, logLine) )
        {
            graph->TraiterLogLine(logLine);
        }
        fichier.close();
    }
    else
    {
        cerr << "Impossible d'ouvrir " << fichierLog << " !" <<endl;
    }
    return graph;
}

void defautAvecExclusion ( const string & nomFichierLog )
{
    cout<<"defautAvecExclusion"<<endl;
}

void defautPourUneHeure ( const string & nomFichierLog, int heure )
{
    cout<<"defautPourUneHeure"<<endl;
}

#endif
