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
void creerGraphe ( const GraphDocuments & graph, const string & nomFichierGraphe );
GraphDocuments & creerGraphe ( const string & fichierLog );
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

	return 0;
}


void defaut (const string &nomFichierLog )
{
    cout<<"defaut"<<endl;
}

void creerFichierGraphe ( const GraphDocuments & graph, const string & nomFichierGraphe )
{
    cout<<"creerFichierGraphe"<<endl;
//    ofstream fichier(nomFichierGraphe,ios::out | ios::trunc);
//    if(fichier)
//    {
//        fichier << "digraph {" << endl;

//        vector<Document> documents = graph.Documents();

//        for ( vector<Document>::iterator itv = documents.begin(); itv != documents.end(); itv++ )
//        {
//            fichier << itv->CheminAccesRessource() << ";" << endl;
//            for ( map<Document,NombreDeHits>::iterator itm = itv->DocumentsAtteignables().begin(); itm != itv->DocumentsAtteignables().end(); itm++ )
//            {
//                fichier << itv.CheminAccesRessource() << " -> " <<
//                      itm->first.CheminAccesRessource() << " [label=\"" <<
//                      itm->seconde.NombreDeHitsTotal(true) << "\"];" << endl;
//            }
//        }

//        fichier << "}" << endl;
//        fichier.close();
//    }
//    else
//    {
//        cerr << "Impossible d'ouvrir " << nomFichierLog << " !" <<endl;
//    }
}

GraphDocuments & creerGraphe ( const string & fichierLog )
{
    cout<<"creerGraphe"<<endl;
    ifstream fichier(nomFichierGraphe,ios::in);
    if(fichier)
    {
        //string logLine;
        //lire toute les lignes;

    }
    else
    {
        cerr << "Impossible d'ouvrir " << fichierLog << " !" <<endl;
    }
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
