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
//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques

void GraphDocuments::TraiterLogLine ( const string & logLine )
// Algorithme :
//
{
    LogLine l = LogParser::Parser(logLine);
    Document document(l.referer,l.referer);
    NombreDeHits nbHits;
    map<Document, NombreDeHits>::iterator it = mapDocumentNombreDeHits.find(document);
    if ( it == mapDocumentNombreDeHits.end() )
    {
        if (l.status / 100 == 2) // succes
        {
            nbHits.nombreDeHitsReussisParHeure[l.date.heure]++;
        }
        else
        {
            nbHits.nombreDeHitsEchouesParHeure[l.date.heure]++;
        }
        mapDocumentNombreDeHits.insert(make_pair(document,nbHits));
    }
    else
    {
        if (l.status / 100 == 2) // succes
        {
            it->second.nombreDeHitsReussisParHeure[l.date.heure]++;
        }
        else
        {
            it->second.nombreDeHitsEchouesParHeure[l.date.heure]++;
        }
    }
} //----- Fin de TraiterLogLine



//const MapDocumentNombreDeHits & GraphDocuments::DocumentNombreDeHits() const
//// Algorithme :
////
//{
//    return mapDocumentNombreDeHits;
//} //----- Fin de DocumentNombreDeHits

const vector<Document> GraphDocuments::Documents() const
// Algorithme :
//
{
    vector<Document> vectorDocuments;

    for ( map<Document, NombreDeHits>::const_iterator it = mapDocumentNombreDeHits.begin(); it != mapDocumentNombreDeHits.end(); it++ )
    {
        vectorDocuments.push_back(it->first);
    }
    return vectorDocuments;
} //----- Fin de Documents

//------------------------------------------------- Surcharge d'op�rateurs

//GraphDocuments & GraphDocuments::operator = (const GraphDocuments & unGraphDocuments)
//// Algorithme :
////
//{
//} //----- Fin de operator =


  //-------------------------------------------- Constructeurs - destructeur
GraphDocuments::GraphDocuments(const GraphDocuments & unGraphDocuments) :
    mapDocumentNombreDeHits(unGraphDocuments.mapDocumentNombreDeHits)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <GraphDocuments>" << endl;
#endif

    //copie profonde

} //----- Fin de GraphDocuments (constructeur de copie)


GraphDocuments::GraphDocuments() :
    mapDocumentNombreDeHits()
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
} //----- Fin de ~GraphDocuments


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- M�thodes prot�g�es

