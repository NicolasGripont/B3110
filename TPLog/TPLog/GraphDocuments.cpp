/*************************************************************************
GraphDocuments  -  fichier de r�alisation de la classe <GraphDocuments>
-------------------
d�but                : 27/11/2015 22:27:56
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- R�alisation de la classe <GraphDocuments> (fichier GraphDocuments.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me

#include <iostream>
using namespace std;

//------------------------------------------------------ Include personnel
#include "GraphDocuments.h"
#include "LogParser.h"	
#include <algorithm>
#include "FoncteurDocument.h"
#include <iterator>
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques




void GraphDocuments::TraiterLogLine ( LogLine l )
// Algorithme :
//
{
    Document * documentSource = DocumentPresent(l.domainName,l.sourceFile);
    Document * documentDemande = DocumentPresent(l.domainName,l.requestedURL);
    if ( documentSource == nullptr )
    {
        documentSource = new Document(l.domainName,l.sourceFile);
        documents.insert(documentSource);
    }
    if ( documentDemande == nullptr )
    {
        documentDemande = new Document(l.domainName,l.requestedURL);
        documents.insert(documentDemande);
    }
    documentDemande->MAJHits(l.status,l.date.heure);

    documentSource->MAJDocAtteignable(l.status,l.date.heure,documentDemande);
} //----- Fin de TraiterLogLine


vector<Document*> GraphDocuments::TrierParNombreDeHitsReussis()
// Algorithme :
//
{
	vector<Document*> documentsTrie;
	std::copy(documents.begin(), documents.end(), std::back_inserter(documentsTrie));
	/*for (set<Document*, DocumentPtrComp>::iterator it = documents.begin(); it != documents.end(); it++)
	{
		documentsTrie.push_back(*it);
	}*/
	sort(documentsTrie.begin(), documentsTrie.end(), Document::CompareParNombreDeHitsReussis);
	return documentsTrie;
} //----- Fin de TrierParNombreDeHitsReussis

const set<Document*, DocumentPtrComp> & GraphDocuments::Documents() const
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
//------------------------------------------------- Surcharge d'op�rateurs

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
    for ( set<Document*, DocumentPtrComp>::const_iterator it = unGraphDocuments.documents.begin(); it != unGraphDocuments.documents.end(); it++ )
    {
        Document *tmp = new Document(*(*it));
        documents.insert(tmp);
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
    for ( set<Document*, DocumentPtrComp>::iterator it = documents.begin(); it != documents.end(); it++ )
    {
        delete *it;
    }
} //----- Fin de ~GraphDocuments


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- M�thodes prot�g�es

Document* GraphDocuments::DocumentPresent(string nomDomaine, string cheminAccesFichier )
{
    Document *document = nullptr;
    Document tmp(nomDomaine,cheminAccesFichier);
    for ( set<Document*, DocumentPtrComp>::iterator it = documents.begin(); it != documents.end(); it++ )
    {
        if ( *(*it) == tmp )
        {
            document = *it;
        }
    }
    return document;
}

