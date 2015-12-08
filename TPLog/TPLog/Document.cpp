/*************************************************************************
Document  -  fichier de réalisation de la classe <Document>
-------------------
début                : 23/11/2015 15:43:10
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Réalisation de la classe <Document> (fichier Document.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Document.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
 void Document::MAJHits ( const LogLine & uneLigne )
 //Algorithme :
{
	if (uneLigne.status < 300)
	{
		nbHits.nombreDeHitsReussisParHeure[uneLigne.date.heure]++;
	}
	else
	{
		nbHits.nombreDeHitsEchouesParHeure[uneLigne.date.heure]++;
	}
} //----- Fin de MAJ

 void Document::MAJDocAtteignable(const LogLine & uneLigne, const Document & unDoc)
 {
	 documentAtteignable.insert(make_pair(uneLigne.requestedURL, unDoc));
 }


//------------------------------------------------- Surcharge d'opérateurs
Document & Document::operator = (const Document & unDocument)
// Algorithme :
//
{
	nomDomaine = unDocument.nomDomaine;
	cheminAccesRessource = unDocument.cheminAccesRessource;
	documentAtteignable = unDocument.documentAtteignable;
	nbHits = unDocument.nbHits;
	return *this;
} //----- Fin de operator =


  //-------------------------------------------- Constructeurs - destructeur
Document::Document(const Document & unDocument) : nomDomaine(unDocument.nomDomaine), 
	cheminAccesRessource(unDocument.cheminAccesRessource), documentAtteignable(unDocument.documentAtteignable),
	nbHits(unDocument.nbHits)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Document>" << endl;
#endif
} //----- Fin de Document (constructeur de copie)


Document::Document(LogLine uneLigne) : nomDomaine(uneLigne.referer), 
	cheminAccesRessource(uneLigne.referer), documentAtteignable(), nbHits()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <Document>" << endl;
#endif

} //----- Fin de Document


Document::~Document()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <Document>" << endl;
#endif
} //----- Fin de ~Document


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- Méthodes protégées

