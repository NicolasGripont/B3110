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

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques

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

//------------------------------------------------- Surcharge d'op�rateurs

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

  //----------------------------------------------------- M�thodes prot�g�es

