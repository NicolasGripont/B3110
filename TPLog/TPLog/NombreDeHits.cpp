/*************************************************************************
NombreDeHits  -  fichier de réalisation de la structure <NombreDeHits>
-------------------
début                : 23/11/2015 15:47:59
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Réalisation de la structure <NombreDeHits> (fichier NombreDeHits.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "NombreDeHits.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type NombreDeHits::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
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

  //----------------------------------------------------- Méthodes protégées

