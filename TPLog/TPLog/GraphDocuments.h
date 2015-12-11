/*************************************************************************
GraphDocuments  -  fichier d'en-tête de la classe <GraphDocuments>
-------------------
début                : 27/11/2015 22:27:39
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <GraphDocuments> (fichier GraphDocuments.h) ------
#if ! defined ( GraphDocuments_H )
#define GraphDocuments_H

//--------------------------------------------------- Interfaces utilisées

#include <vector>

using namespace std;


#include "Document.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

typedef vector<Document> VectorDocuments;

//------------------------------------------------------------------------
// Rôle de la classe <GraphDocuments>
//
//
//------------------------------------------------------------------------

class GraphDocuments 
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- Méthodes publiques
     void TraiterLogLine ( const string & logLine );
	// Mode d'emploi :
	//
	// Contrat :
	//

     const MapDocumentNombreDeHits & DocumentNombreDeHits() const;
     // Mode d'emploi :
     //
     // Contrat :
     //

    const VectorDocuments Documents() const;
    // Mode d'emploi :
    //
    // Contrat :
    //

	//------------------------------------------------- Surcharge d'opérateurs
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

	GraphDocuments();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~GraphDocuments();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- Méthodes protégées

	//----------------------------------------------------- Attributs protégés

    MapDocumentNombreDeHits mapDocumentNombreDeHits;
};

//--------------------------- Autres définitions dépendantes de <GraphDocuments>

#endif // GraphDocuments_H


