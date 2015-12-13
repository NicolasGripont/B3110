/*************************************************************************
GraphDocuments  -  fichier de réalisation de la classe <GraphDocuments>
-------------------
début                : 27/11/2015 22:27:56
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Réalisation de la classe <GraphDocuments> (fichier GraphDocuments.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système

#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "GraphDocuments.h"
#include "LogParser.h"	
#include <algorithm>
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques




void GraphDocuments::TraiterLogLine ( LogLine l )
// Algorithme :
//
{
    Document * documentSource = DocumentPresent(l.domainName,l.sourceFile);
    Document * documentDemande = DocumentPresent(l.domainName,l.requestedURL);
    if ( documentSource == nullptr )
    {
        documentSource = new Document(l.domainName,l.sourceFile);
        documents.push_back(documentSource);
    }
    if ( documentDemande == nullptr )
    {
        documentDemande = new Document(l.domainName,l.requestedURL);
        documents.push_back(documentDemande);
    }
    documentDemande->MAJHits(l.status,l.date.heure);

    documentSource->MAJDocAtteignable(l.status,l.date.heure,documentDemande);

} //----- Fin de TraiterLogLine


void GraphDocuments::TrierParNombreDeHitsReussis()
// Algorithme :
//
{
    sort(documents.begin(), documents.end(), Document::CompareParNombreDeHitsReussis);
} //----- Fin de TrierParNombreDeHitsReussis

const vector<Document*> & GraphDocuments::Documents() const
// Algorithme :
//
{
    return documents;
} //----- Fin de Documents


const string & GraphDocuments::NomDomaine() const
// Algorithme :
//
{
    return nomDomaine;
} //----- Fin de NomDomaine
//------------------------------------------------- Surcharge d'opérateurs

//GraphDocuments & GraphDocuments::operator = (const GraphDocuments & unGraphDocuments)
//// Algorithme :
////
//{
//} //----- Fin de operator =


  //-------------------------------------------- Constructeurs - destructeur
GraphDocuments::GraphDocuments(const GraphDocuments & unGraphDocuments) :
    documents(),
    nomDomaine(unGraphDocuments.nomDomaine)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <GraphDocuments>" << endl;
#endif
    for ( vector<Document*>::const_iterator it = unGraphDocuments.documents.begin(); it != unGraphDocuments.documents.end(); it++ )
    {
        Document *tmp = new Document(*(*it));
        documents.push_back(tmp);
    }
} //----- Fin de GraphDocuments (constructeur de copie)


GraphDocuments::GraphDocuments(string nD) :
    documents(),
    nomDomaine (nD)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <GraphDocuments>" << endl;
#endif
} //----- Fin de GraphDocuments


GraphDocuments::~GraphDocuments()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <GraphDocuments>" << endl;
#endif
    for ( vector<Document*>::iterator it = documents.begin(); it != documents.end(); it++ )
    {
        delete *it;
    }
} //----- Fin de ~GraphDocuments


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- Méthodes protégées

Document* GraphDocuments::DocumentPresent(string nomDomaine, string cheminAccesFichier )
{
    Document *document = nullptr;
    Document tmp(nomDomaine,cheminAccesFichier);
    for ( vector<Document*>::iterator it = documents.begin(); it != documents.end(); it++ )
    {
        if ( *(*it) == tmp )
        {
            document = *it;
        }
    }
    return document;
}

