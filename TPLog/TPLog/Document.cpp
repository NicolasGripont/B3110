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

#include <iostream>
using namespace std;

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
     NombreDeHits unNombreDeHits;

     if (documentsAtteignables.find(unDoc) != documentsAtteignables.end())
	 {
         if (uneLigne.status < 300)
         {
             documentsAtteignables.find(unDoc)->second.nombreDeHitsReussisParHeure[uneLigne.date.heure]++;
         }
         else
         {
             documentsAtteignables.find(unDoc)->second.nombreDeHitsEchouesParHeure[uneLigne.date.heure]++;
         }
	 }
	 else
     {
         if (uneLigne.status < 300)
         {
             unNombreDeHits.nombreDeHitsReussisParHeure[uneLigne.date.heure]++;
         }
         else
         {
             unNombreDeHits.nombreDeHitsEchouesParHeure[uneLigne.date.heure]++;
         }
         documentsAtteignables.insert(make_pair(unDoc, unNombreDeHits));
     }
 }


 const string & Document::CheminAccesRessource() const
 {
	 return cheminAccesRessource;
 }

 const MapDocumentNombreDeHits & Document::DocumentsAtteignables() const
 {
     return documentsAtteignables;
 }

 //------------------------------------------------- Surcharge d'opérateurs
Document & Document::operator = (const Document & unDocument)
// Algorithme :
//
{
	nomDomaine = unDocument.nomDomaine;
	cheminAccesRessource = unDocument.cheminAccesRessource;
    documentsAtteignables = unDocument.documentsAtteignables;
	nbHits = NombreDeHits(unDocument.nbHits);
	return *this;
} //----- Fin de operator =


bool Document::operator<(const Document & unDocument) const
{
	return cheminAccesRessource < unDocument.cheminAccesRessource;
}

bool Document::operator==(const Document & unDocument) const
{
	return cheminAccesRessource == unDocument.cheminAccesRessource;
}

bool Document::operator>(const Document & unDocument) const
{
	return cheminAccesRessource > unDocument.cheminAccesRessource;
}

//-------------------------------------------- Constructeurs - destructeur
Document::Document(const Document & unDocument) : nomDomaine(unDocument.nomDomaine), 
    cheminAccesRessource(unDocument.cheminAccesRessource), documentsAtteignables(unDocument.documentsAtteignables),
	nbHits(unDocument.nbHits)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Document>" << endl;
#endif
} //----- Fin de Document (constructeur de copie)


Document::Document(LogLine uneLigne) : nomDomaine(uneLigne.referer), 
    cheminAccesRessource(uneLigne.referer), documentsAtteignables(), nbHits()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <Document>" << endl;
#endif

} //----- Fin de Document

Document::Document(string nD, string cAR) : nomDomaine(nD),
 cheminAccesRessource(cAR), nbHits(), documentsAtteignables()
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

