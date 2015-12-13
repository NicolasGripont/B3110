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
#include <iostream>
using namespace std;

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
    int result;
	if (uneHeure >= NB_HEURE_PAR_JOUR)
	{
        result =  -1;
	}
    else if (UniquementReussi)
	{
        result = nombreDeHitsReussisParHeure[uneHeure];
	}
	else
	{
        result = nombreDeHitsEchouesParHeure[uneHeure] + nombreDeHitsReussisParHeure[uneHeure];
	}
    return result;
}

int NombreDeHits::NombreDeHitsTotal(bool UniquementReussi) const
{
	int s = 0;
    for (int i = 0; i < NB_HEURE_PAR_JOUR; i++)
	{
		s += nombreDeHitsReussisParHeure[i];
	}
    if ( !UniquementReussi )
	{
        for (int i = 0; i < NB_HEURE_PAR_JOUR; i++)
        {
            s += nombreDeHitsEchouesParHeure[i];
        }
	}
	return s;
}

void NombreDeHits::MAJHits ( bool status, int heure )
// Algorithme :
//
{
    if ( heure > 0 && heure < NB_HEURE_PAR_JOUR )
    {
        if (status)
        {
            nombreDeHitsReussisParHeure[heure]++;
        }
        else
        {
            nombreDeHitsEchouesParHeure[heure]++;
        }
    }
} //----- Fin de MAJHits

//------------------------------------------------- Surcharge d'op�rateurs
NombreDeHits & NombreDeHits::operator = (const NombreDeHits & unNombreDeHits)
// Algorithme :
//
{
    if (this != &unNombreDeHits)
    {
        for ( int i = 0; i < NB_HEURE_PAR_JOUR; i++ )
        {
            nombreDeHitsEchouesParHeure[i] = unNombreDeHits.nombreDeHitsEchouesParHeure[i];
            nombreDeHitsReussisParHeure[i] = unNombreDeHits.nombreDeHitsReussisParHeure[i];
        }
    }
    return *this;
} //----- Fin de operator =


  //-------------------------------------------- Constructeurs - destructeur
NombreDeHits::NombreDeHits(const NombreDeHits & unNombreDeHits)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <NombreDeHits>" << endl;
#endif
    for ( int i = 0; i < NB_HEURE_PAR_JOUR; i++ )
    {
        nombreDeHitsReussisParHeure[i] = unNombreDeHits.nombreDeHitsReussisParHeure[i];
        nombreDeHitsEchouesParHeure[i] = unNombreDeHits.nombreDeHitsEchouesParHeure[i];
    }
} //----- Fin de NombreDeHits (constructeur de copie)


NombreDeHits::NombreDeHits()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <NombreDeHits>" << endl;
#endif
    for ( int i = 0; i < NB_HEURE_PAR_JOUR; i++ )
    {
        nombreDeHitsReussisParHeure[i] = 0;
        nombreDeHitsEchouesParHeure[i] = 0;
    }
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

