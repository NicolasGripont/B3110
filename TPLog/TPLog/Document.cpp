/*************************************************************************
Document  -  fichier de r�alisation de la classe <Document>
-------------------
d�but                : 23/11/2015 15:43:10
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- R�alisation de la classe <Document> (fichier Document.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Document.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type Document::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs
Document & Document::operator = (const Document & unDocument)
// Algorithme :
//
{
} //----- Fin de operator =


  //-------------------------------------------- Constructeurs - destructeur
Document::Document(const Document & unDocument)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Document>" << endl;
#endif
} //----- Fin de Document (constructeur de copie)


Document::Document()
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

  //----------------------------------------------------- M�thodes prot�g�es

