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
#include <map>
using namespace std;

#include "NombreDeHits.h"
#include "LogLine.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types
class Document;
template class std::map<Document*, NombreDeHits>;

//------------------------------------------------------------------------
// R�le de la classe <Document>
// Classe permettant de d�finir un document d'un serveur.
//
//------------------------------------------------------------------------

//-------------------------------------------------------------- Fonctions

class Document
{
	//----------------------------------------------------------------- PUBLIC

public:

    //------------------------------------------------------------------ Types

	//----------------------------------------------------- M�thodes publiques
	void MAJHits (int status, int heure);
	// Mode d'emploi :
	// Met � jour le nombre de hits du document en fonction du code de retour de la requ�te
	//
	// Contrat : aucun
	//

    static bool CompareParNombreDeHitsReussis(Document* a, Document* b);
    // Mode d'emploi :
    // Methode permettant de comparer deux documents en fontion du nombre de
    // hits. Return true si le nombre De Hits Reussis de a est superieur au
    // nombre De Hits Reussis de b, false sinon.
    //
    // Contrat : aucun
    //

    void MAJDocAtteignable(int status, int heure, Document* unDoc);
    // Mode d'emploi :
	// Met � jour les documents atteignables depuis ce document.
	//
    // Contrat : Aucun.
	//

    int NombreDeHitsAPartirDeCeDocument ( bool uniquementReussis = true );
    // Mode d'emploi :
    // M�thode permettant de recuperer le nombre de hits reussi (uniquementReussis = true)
    // ou le nombre totals de hits provenant de ce document.
    //
    // Contrat : Aucun.
    //

    const map<Document*,NombreDeHits> & DocumentsAtteignables() const;
    // Mode d'emploi :
    // Retourne l'attribut documentsAtteignable
    //
    // Contrat : Aucun.

    const NombreDeHits & NbHits() const;
    // Mode d'emploi :
    // Accesseur en lecture sur le nombre de Hits;
    //
    // Contrat : Aucun.

    const string & CheminAccesRessource() const;
	// Mode d'emploi :
	// Retourne l'attribut cheminAccesRessource
	// 
	// Contrat : Aucun.

	//------------------------------------------------- Surcharge d'op�rateurs
    Document & operator = (const Document & unDocument);
	// Mode d'emploi :
	// Surchage de l'op�rateur =, copie profonde
	//
	// Contrat : Aucun
	//

    bool operator < (const Document & unDocument) const;
    // compare sur les attributs cheminAccesRessource (non utilis�)

	bool operator == (const Document & unDocument) const;
	// Mode d'emploi :
	// Compare les attributs cheminAccesRessource et nomDomaine des documents
	//
	// Contrat : Aucun.

	bool operator > (const Document & unDocument) const;
	// compare sur les attributs cheminAccesRessource (non utilis�)


	//-------------------------------------------- Constructeurs - destructeur
	Document(const Document & unDocument);
	// Mode d'emploi (constructeur de copie) :
	// Constructeur par copie, copie profonde
	//
	// Contrat :
	//

    Document(string nD, string cAR);
    // Mode d'emploi :
    // Cr�� un document et initialise les attributs nomDomaine et cheminAccesRessource
    //
    // Contrat : aucun.
    //

	virtual ~Document();
    // Mode d'emploi : Destructeur.
	//
    // Contrat : aucun.
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- M�thodes prot�g�es

	//----------------------------------------------------- Attributs prot�g�s
    string nomDomaine;                                 // nom de domaine du
                                                       // serveur ou le fichier
                                                       // se trouve.

    string cheminAccesRessource;                       // chemin d'acces
                                                       // a la ressource
                                                       // de puis le serveur

    NombreDeHits nbHits;                               // nombre de hits

    map<Document*,NombreDeHits> documentsAtteignables; // map contenant les documents (key)
                                                       // accessible depuis celui-ci
                                                       // et le nombre de hits
                                                       // a partir de ce document (valeur)

};

//--------------------------- Autres d�finitions d�pendantes de <Document>




#endif // Document_H


