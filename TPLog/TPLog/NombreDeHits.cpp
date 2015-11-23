/*************************************************************************
NombreDeHits  -  fichier de r�alisation de la structure <NombreDeHits>
-------------------
d�but                : 23/11/2015 15:47:59
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- R�alisation de la structure <NombreDeHits> (fichier NombreDeHits.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "NombreDeHits.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type NombreDeHits::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs
NombreDeHits & NombreDeHits::operator = (const NombreDeHits & unNombreDeHits)
// Algorithme :
//
{
} //----- Fin de operator =


  //-------------------------------------------- Constructeurs - destructeur
NombreDeHits::NombreDeHits(const NombreDeHits & unNombreDeHits)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <NombreDeHits>" << endl;
#endif
} //----- Fin de NombreDeHits (constructeur de copie)


NombreDeHits::NombreDeHits()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <NombreDeHits>" << endl;
#endif
} //----- Fin de NombreDeHits


NombreDeHits::~NombreDeHits()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <NombreDeHits>" << endl;
#endif
} //----- Fin de ~NombreDeHits


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- M�thodes prot�g�es

