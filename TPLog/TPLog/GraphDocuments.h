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

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

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
	// type M�thode ( liste des param�tres );
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

};

//--------------------------- Autres d�finitions d�pendantes de <GraphDocuments>

#endif // GraphDocuments_H


