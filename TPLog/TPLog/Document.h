/*************************************************************************
Document  -  fichier d'en-tête de la classe <Document>
-------------------
début                : 23/11/2015 15:43:24
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <Document> (fichier Document.h) ------
#if ! defined ( Document_H )
#define Document_H

//--------------------------------------------------- Interfaces utilisées
#include "NombreDeHits.h"
#include <map>
#include "LogLine.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
class Document;
template class map<Document*, NombreDeHits>;

//------------------------------------------------------------------------
// Rôle de la classe <Document>
//
//
//------------------------------------------------------------------------

class Document
{
	//----------------------------------------------------------------- PUBLIC

public:

    //------------------------------------------------------------------ Types

	//----------------------------------------------------- Méthodes publiques
	void MAJHits (int status, int heure);
	// Mode d'emploi :
	// Met à jour le nombre de hits du document en fonction du code de retour de la requête
	//
	// Contrat : aucun
	//

    void MAJDocAtteignable(int status, int heure, Document* unDoc);
    // Mode d'emploi :
	// Met à jour les documents atteignables depuis ce document.
	//
	// Contrat : Aucun (ptet qu'il ne soit pas déjà dans les docs ateignables)
	//

    const string & CheminAccesRessource() const;
	// Mode d'emploi :
	// Retourne l'attribut cheminAccesRessource
	// 
	// Contrat : Aucun.

	//------------------------------------------------- Surcharge d'opérateurs
    Document & operator = (const Document & unDocument);
	// Mode d'emploi :
	// Surchage de l'opérateur =, copie profonde
	//
	// Contrat : Aucun
	//

    const map<Document*,NombreDeHits> & DocumentsAtteignables() const;
	// Mode d'emploi :
	// Retourne l'attribut documentsAtteignable
	//
	// Contrat : Aucun.

	bool operator < (const Document & unDocument) const;
	// compare sur les attributs cheminAccesRessource (non utilisé)

	bool operator == (const Document & unDocument) const;
	// Mode d'emploi :
	// Compare les attributs cheminAccesRessource et nomDomaine des documents
	//
	// Contrat : Aucun.

	bool operator > (const Document & unDocument) const;
	// compare sur les attributs cheminAccesRessource (non utilisé)


	//-------------------------------------------- Constructeurs - destructeur
	Document(const Document & unDocument);
	// Mode d'emploi (constructeur de copie) :
	// Constructeur par copie, copie profonde
	//
	// Contrat :
	//

	Document(LogLine uneLigne);
	// Mode d'emploi :
	// Créé un document à partir d'une ligne de logline (pas utilisé)
	//
	// Contrat : aucun.
	//

    Document(string nD, string cAR);
    // Mode d'emploi :
    // Créé un document et initialise les attributs nomDomaine et cheminAccesRessource
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
	//----------------------------------------------------- Méthodes protégées

	//----------------------------------------------------- Attributs protégés
	string nomDomaine;
	string cheminAccesRessource;
	NombreDeHits nbHits;
    map<Document*,NombreDeHits> documentsAtteignables;

};

//--------------------------- Autres définitions dépendantes de <Document>

#endif // Document_H


