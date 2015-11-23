/*************************************************************************
TPLog  -  fichier main
-------------------
début                : 23/11/2015 14:30:19
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/
#include "Utilisateur.h"
#include "Document.h"
#include "NombreDeHits.h"

#include <iostream>
using namespace std;

void defaut ( string nomFichierLog );
void creerGraphe ( string nomFichierLog, string nomFichierGraphe );
void defautAvecExclusion ( string nomFichierLog );
void defautPourUneHeure ( string nomFichierLog, int heure );
//faire une fonction man de ce programme si erreur commande

int main (int argc, char* argv[])
{
    string nomFichierLog = "";
    string nomFichierGraph = "";
    int heure = 0;

    switch (argc) {

    case 1 :
        cerr << "Commande incomplete." << endl;
        break;

    case 2 :
        nomFichierLog = argv[1];
        defaut(nomFichierLog);
        break;

    case 3 :
        if ( strcmp(argv[1],"-e") == 0 )
        {
            nomFichierLog = argv[2];
            defautAvecExclusion(nomFichierLog);
        }
        else
        {
             cerr << "Commande invalide." << endl;
        }
        break;

    case 4 :
        if ( strcmp(argv[1],"-g") == 0 )
        {
            nomFichierGraph = argv[2];
            nomFichierLog = argv[3];
            creerGraphe(nomFichierLog,nomFichierGraph);
        }
        else if ( strcmp(argv[1],"-t") == 0 )
        {
            if ( sscanf(argv[2],"%d",&heure) == 1 )
            {
                nomFichierLog = argv[3];
                defautPourUneHeure(nomFichierLog,heure);
            }
            else
            {
                cerr << "Commande invalide." << endl;
            }
        }
        else
        {
             cerr << "Commande invalide." << endl;
        }
        break;

    default :
        cerr << "Commande invalide." << endl;
        break;
    }
	return 0;
}


void defaut ( string nomFichierLog )
{
    cout<<"defaut"<<endl;
}

void creerGraphe ( string nomFichierLog, string nomFichierGraphe )
{
    cout<<"creerGraphe"<<endl;
}

void defautAvecExclusion ( string nomFichierLog )
{
    cout<<"defautAvecExclusion"<<endl;
}

void defautPourUneHeure ( string nomFichierLog, int heure )
{
    cout<<"defautPourUneHeure"<<endl;
}
