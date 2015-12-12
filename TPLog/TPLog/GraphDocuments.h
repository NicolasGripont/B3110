/*************************************************************************
GraphDocuments  -  fichier d'en-t�te de la classe <GraphDocuments>
-------------------
d�but                : 27/11/2015 22:27:39
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <GraphDocuments> (fichier GraphDocuments.h) ------
#if ! defined ( GraphDocuments_H )
#define GraphDocuments_H

//--------------------------------------------------- Interfaces utilis�es

#include <vector>

using namespace std;


#include "Document.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

template class vector<Document*>;

//------------------------------------------------------------------------
// R�le de la classe <GraphDocuments>
//
//
//------------------------------------------------------------------------

class GraphDocuments 
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- M�thodes publiques
     void TraiterLogLine ( const string & logLine );
	// Mode d'emploi :
    // Methode permettant de traiter une ligne de log.
    // Ajoute et/ou met a jour les documents en fonction de la ligne de log.
	//
    // Contrat : ligne de log correctement ecrite.
    //

    void TrierParNombreDeHitsReussis ();
    // Mode d'emploi :
    //
    // Contrat :
    //

    const vector<Document*> & Documents() const;
    // Mode d'emploi :
    // Methode permettant de r�cup�rer un vector contenant tous les documents du graph
    //
    // Contrat : aucun.
    //

	//------------------------------------------------- Surcharge d'op�rateurs
    GraphDocuments & operator = (const GraphDocuments & unGraphDocuments);
    // Mode d'emploi :
    //
    // Contrat :
    //

	//-------------------------------------------- Constructeurs - destructeur
	GraphDocuments(const GraphDocuments & unGraphDocuments);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

    GraphDocuments( string nD );
    // Mode d'emploi : Constructeur.
	//
    // Contrat : aucun.
	//

	virtual ~GraphDocuments();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- M�thodes prot�g�es

    Document * DocumentPresent(string nomDomaine, string chemineAccesFichier );
    // Mode d'emploi :
    //
    //
    // Contrat : aucun.
    //

	//----------------------------------------------------- Attributs prot�g�s

    vector<Document*> documents;

    string nomDomaine;
};

//--------------------------- Autres d�finitions d�pendantes de <GraphDocuments>

#endif // GraphDocuments_H


