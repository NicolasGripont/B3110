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
    if (status/100 == 2)
	{
		nbHits.nombreDeHitsReussisParHeure[heure]++;
	}
	else
	{
		nbHits.nombreDeHitsEchouesParHeure[heure]++;
	}
} //----- Fin de MAJ

bool Document::CompareParNombreDeHitsReussis(Document* a, Document* b)
//Algorithme :
//
{
    return a->nbHits.NombreDeHitsTotal() > b->nbHits.NombreDeHitsTotal();
} //----- Fin de MAJ


void Document::MAJDocAtteignable(int status, int heure, Document* unDoc)
{
    NombreDeHits unNombreDeHits;

    map<Document*, NombreDeHits>::iterator it = documentsAtteignables.begin();

    it = documentsAtteignables.find(unDoc);

    if ( it != documentsAtteignables.end())
    {
        if (status / 100 == 2)
        {
         it->second.nombreDeHitsReussisParHeure[heure]++;
        }
        else
        {
         it->second.nombreDeHitsEchouesParHeure[heure]++;
        }
    }
    else
    {
        if (status / 100 == 2)
        {
         unNombreDeHits.nombreDeHitsReussisParHeure[heure]++;
        }
        else
        {
         unNombreDeHits.nombreDeHitsEchouesParHeure[heure]++;
        }
        documentsAtteignables.insert(make_pair(unDoc, unNombreDeHits));
    }
}


const string & Document::CheminAccesRessource() const
{
    return cheminAccesRessource;
}

const map<Document*,NombreDeHits> & Document::DocumentsAtteignables() const
{
    return documentsAtteignables;
}

const NombreDeHits & Document::NbHits() const
{
    return nbHits;
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
	return cheminAccesRessource == unDocument.cheminAccesRessource && nomDomaine == unDocument.nomDomaine;
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

