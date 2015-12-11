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

typedef vector<Document> VectorDocuments;

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
	//----------------------------------------------------- M�thodes prot�g�es

	//----------------------------------------------------- Attributs prot�g�s

    MapDocumentNombreDeHits mapDocumentNombreDeHits;
};

//--------------------------- Autres d�finitions d�pendantes de <GraphDocuments>

#endif // GraphDocuments_H


