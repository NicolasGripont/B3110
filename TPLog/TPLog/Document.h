/*************************************************************************
Document  -  fichier d'en-t�te de la classe <Document>
-------------------
d�but                : 23/11/2015 15:43:24
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <Document> (fichier Document.h) ------
#if ! defined ( Document_H )
#define Document_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la classe <Document>
//
//
//------------------------------------------------------------------------

class Document : public Ancetre
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
	Document & operator = (const Document & unDocument);
	// Mode d'emploi :
	//
	// Contrat :
	//


	//-------------------------------------------- Constructeurs - destructeur
	Document(const Document & unDocument);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	Document();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~Document();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- M�thodes prot�g�es

	//----------------------------------------------------- Attributs prot�g�s

};

//--------------------------- Autres d�finitions d�pendantes de <Document>

#endif // Document_H


