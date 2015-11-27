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
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "GraphDocuments.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type GraphDocuments::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs
GraphDocuments & GraphDocuments::operator = (const GraphDocuments & unGraphDocuments)
// Algorithme :
//
{
} //----- Fin de operator =


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

