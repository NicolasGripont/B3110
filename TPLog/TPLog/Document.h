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
#include "NombreDeHits.h"
#include <map>
#include "LogLine.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la classe <Document>
//
//
//------------------------------------------------------------------------

class Document
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- M�thodes publiques
	void MAJHits (const LogLine & uneLigne);
	// Mode d'emploi :
	// Met � jour le nombre de hits du document en fonction du code de retour de la requ�te
	//
	// Contrat : aucun
	//

	void MAJDocAtteignable(const LogLine & uneLigne, const Document & unDoc);
	// Mode d'emploi :
	// Met � jour les documents atteignables depuis ce document.
	//
	// Contrat : Aucun (ptet qu'il ne soit pas d�j� dans les docs ateignables)
	//

	string CheminAccesRessource();

	//------------------------------------------------- Surcharge d'op�rateurs
	Document & operator = (const Document & unDocument);
	// Mode d'emploi :
	// 
	// Contrat :
	//

	bool operator < (const Document & unDocument) const;

	bool operator == (const Document & unDocument) const;

	bool operator > (const Document & unDocument) const;

	//-------------------------------------------- Constructeurs - destructeur
	Document(const Document & unDocument);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

    Document(LogLine uneLigne);
	// Mode d'emploi :
	// Cr�� un document � partir d'une ligne de logline
	//
	// Contrat : aucun.
	//


    Document(string nD, string cAR);
    // Mode d'emploi :
    // Constructeur.
    //
    // Contrat : aucun.
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
	string nomDomaine;
	string cheminAccesRessource;
	NombreDeHits nbHits;
    map<Document, NombreDeHits> documentAtteignable;
	
};

//--------------------------- Autres d�finitions d�pendantes de <Document>

#endif // Document_H


