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
void Document::MAJHits ( int status, int heure )
//Algorithme :
//
{
    nbHits.MAJHits(status/100 == 2,heure);
} //----- Fin de MAJHits

bool Document::CompareParNombreDeHitsReussis(Document* a, Document* b)
//Algorithme :
//
{
    return a->nbHits.NombreDeHitsTotal() > b->nbHits.NombreDeHitsTotal();
} //----- Fin de CompareParNombreDeHitsReussis


void Document::MAJDocAtteignable(int status, int heure, Document* unDoc)
//Algorithme :
//
{
    NombreDeHits unNombreDeHits;

    map<string,pair<Document*, NombreDeHits>>::iterator it = documentsAtteignables.begin();

    it = documentsAtteignables.find(unDoc->CheminAccesRessource());

    if ( it != documentsAtteignables.end())
    {
        it->second.second.MAJHits(status/100 == 2,heure);
    }
    else
    {
        unNombreDeHits.MAJHits(status/100 == 2,heure);
        documentsAtteignables.insert(make_pair(unDoc->CheminAccesRessource(),make_pair(unDoc, unNombreDeHits)));
    }
} //----- Fin de MAJDocAtteignable

int Document::NombreDeHitsAPartirDeCeDocument ( bool uniquementReussis )
//Algorithme :
//
{
    int somme = 0;
    for ( map<string,pair<Document*, NombreDeHits>>::const_iterator it = documentsAtteignables.begin(); it != documentsAtteignables.end(); it++ )
    {
        somme += it->second.second.NombreDeHitsTotal(uniquementReussis);
    }
    return somme;
} //----- Fin de NombreDeHitsAPartirDeCeDocument

const string & Document::CheminAccesRessource() const
//Algorithme :
//
{
    return cheminAccesRessource;
} //----- Fin de CheminAccesRessource

const map<string,pair<Document*, NombreDeHits>> & Document::DocumentsAtteignables() const
//Algorithme :
//
{
    return documentsAtteignables;
} //----- Fin de DocumentsAtteignables

const NombreDeHits & Document::NbHits() const
//Algorithme :
//
{
    return nbHits;
} //----- Fin de NbHits

 //------------------------------------------------- Surcharge d'opérateurs
//Document & Document::operator = (const Document & unDocument)
//// Algorithme :
////
//{
//	nomDomaine = unDocument.nomDomaine;
//	cheminAccesRessource = unDocument.cheminAccesRessource;
//    documentsAtteignables = unDocument.documentsAtteignables;
//	nbHits = NombreDeHits(unDocument.nbHits);
//	return *this;
//} //----- Fin de operator =


bool Document::operator<(const Document & unDocument) const
//Algorithme :
//
{
	return cheminAccesRessource < unDocument.cheminAccesRessource;
} //----- Fin de operator<

bool Document::operator==(const Document & unDocument) const
//Algorithme :
//
{
    return cheminAccesRessource == unDocument.cheminAccesRessource;// && nomDomaine == unDocument.nomDomaine;
} //----- Fin de operator==

bool Document::operator>(const Document & unDocument) const
//Algorithme :
//
{
	return cheminAccesRessource > unDocument.cheminAccesRessource;
} //----- Fin de operator>

//-------------------------------------------- Constructeurs - destructeur
Document::Document(const Document & unDocument) : nomDomaine(unDocument.nomDomaine), 
    cheminAccesRessource(unDocument.cheminAccesRessource), nbHits(unDocument.nbHits),
    documentsAtteignables(unDocument.documentsAtteignables)

// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Document>" << endl;
#endif
} //----- Fin de Document (constructeur de copie)


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

