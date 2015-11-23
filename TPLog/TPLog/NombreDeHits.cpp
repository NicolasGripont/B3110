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


int NombreDeHits::NombreDeHitsPourUneHeure(int uneHeure, bool UniquementReussi)
{
	if (uneHeure >= NB_HEURE_PAR_JOUR)
	{
		return -1;
	}
	if (UniquementReussi)
	{
		return nombreDeHitsReussisParHeure[uneHeure];
	}
	else
	{
		return nombreDeHitsEchouesParHeure[uneHeure] + nombreDeHitsReussisParHeure[uneHeure];
	}
}

int NombreDeHits::NombreDeHitsTotal(bool UniquementReussi)
{
	int s = 0;
	for (int i = 0; i < NB_HEURE_PAR_JOUR; i++)
	{
		s += nombreDeHitsReussisParHeure[i];
	}
	if (UniquementReussi)
	{
		return s;
	}
	for (int i = 0; i < NB_HEURE_PAR_JOUR; i++)
	{
		s += nombreDeHitsEchouesParHeure[i];
	}
	return s;
}

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

