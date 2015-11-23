/*************************************************************************
Utilisateur  -  fichier de r�alisation de la classe <Utilisateur>
-------------------
d�but                : 23/11/2015 15:37:41
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- R�alisation de la classe <Utilisateur> (fichier Utilisateur.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Utilisateur.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type Utilisateur::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs
Utilisateur & Utilisateur::operator = (const Utilisateur & unUtilisateur)
// Algorithme :
//
{
} //----- Fin de operator =


  //-------------------------------------------- Constructeurs - destructeur
Utilisateur::Utilisateur(const Utilisateur & unUtilisateur)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <Utilisateur>" << endl;
#endif
} //----- Fin de Utilisateur (constructeur de copie)


Utilisateur::Utilisateur()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <Utilisateur>" << endl;
#endif
} //----- Fin de Utilisateur


Utilisateur::~Utilisateur()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <Utilisateur>" << endl;
#endif
} //----- Fin de ~Utilisateur


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- M�thodes prot�g�es

