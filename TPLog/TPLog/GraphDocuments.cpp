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

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

void GraphDocuments::TraiterLogLine ( const string & logLine )
// Algorithme :
//
{

} //----- Fin de TraiterLogLine

//const MapDocumentNombreDeHits & GraphDocuments::DocumentNombreDeHits() const
//// Algorithme :
////
//{
//    return mapDocumentNombreDeHits;
//} //----- Fin de DocumentNombreDeHits

//const VectorDocuments GraphDocuments::Documents() const
//// Algorithme :
////
//{
//    VectorDocuments vectorDocuments;



//    return vectorDocuments;
//} //----- Fin de Documents

//------------------------------------------------- Surcharge d'opérateurs

//GraphDocuments & GraphDocuments::operator = (const GraphDocuments & unGraphDocuments)
//// Algorithme :
////
//{
//} //----- Fin de operator =


  //-------------------------------------------- Constructeurs - destructeur
GraphDocuments::GraphDocuments(const GraphDocuments & unGraphDocuments)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <GraphDocuments>" << endl;
#endif
} //----- Fin de GraphDocuments (constructeur de copie)


GraphDocuments::GraphDocuments()
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

  //----------------------------------------------------- Méthodes protégées

