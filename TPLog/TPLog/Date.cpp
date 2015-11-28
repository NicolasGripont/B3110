/*************************************************************************
Date  -  fichier d'en-tête de la classe <Date>
-------------------
debut      : 27/11/2015 22:30:09
copyright  : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail     : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Realisation de la classe <Date> (fichier Date.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "Date.h"

//------------------------------------------------------------- Constantes

//---------------------------------------------------- Variables de classe

//----------------------------------------------------------- Types prives


//----------------------------------------------------------------- PUBLIC
//-------------------------------------------------------- Fonctions amies

//----------------------------------------------------- Methodes publiques
void Date::Affiche( )
// Algorithme :
//
{
    cout <<jour<<"/"<<mois<<"/"<<annee<<" "<<heure<<":"<<minute<<":"
        <<seconde<<" "<< gmt <<endl;
} //----- Fin de Methode

bool Date::EstValide( )
// Algorithme :
//
{
	return( mois > 1 || mois <= 12 ||
		jour > 1 ||
		(mois == 1 && jour <= 31) ||
		(mois == 2 && jour%4 == 0 && jour <= 29 ) ||
		(mois == 2 && jour%4 != 0 && jour <= 28 ) ||
		(mois == 3 && jour <= 31) ||
		(mois == 4 && jour <= 30) ||
		(mois == 5 && jour <= 31) ||
		(mois == 6 && jour <= 30) ||
		(mois == 7 && jour <= 31) ||
		(mois == 8 && jour <= 31) ||
		(mois == 9 && jour <= 30) ||
		(mois == 10 && jour <= 31) ||
		(mois == 11 && jour <= 30) ||
		(mois == 12 && jour <= 31) ||
		heure >= 0 || heure <= 24 ||
		minute >= 0 || minute < 60 ||
		seconde >= 0 || seconde < 60 );
} //----- Fin de Methode


//------------------------------------------------- Surcharge d'operateurs
Date & Date::operator = ( const Date & uneDate )
// Algorithme :
//
{
	if (this != &uneDate)
	{
		annee = uneDate.annee;
		mois = uneDate.mois;
		jour = uneDate.jour;
		heure = uneDate.heure;
		minute = uneDate.minute;
		seconde = uneDate.seconde;
	}

	return * this;
} //----- Fin de operator =


bool Date::operator == ( const Date & uneDate )
// Algorithme :
//
{
	return (annee == uneDate.annee && mois == uneDate.mois &&
			jour == uneDate.jour && heure == uneDate.heure &&
			minute == uneDate.minute && seconde == uneDate.seconde);
} //----- Fin de operator =

bool Date::operator < ( const Date & uneDate ) const
// Algorithme :
//
{
	bool estInferieur = false;

	if (annee < uneDate.annee)
	{
		estInferieur = true;
	}
	else if (annee == uneDate.annee && mois < uneDate.mois)
	{
		estInferieur = true;
	}
	else if (annee == uneDate.annee && mois == uneDate.mois &&
			jour < uneDate.jour)
	{
		estInferieur = true;
	}
	else if (annee == uneDate.annee && mois == uneDate.mois &&
			jour == uneDate.jour && heure < uneDate.heure)
	{
		estInferieur = true;
	}
	else if (annee == uneDate.annee && mois == uneDate.mois &&
			jour == uneDate.jour && heure == uneDate.heure &&
			minute < uneDate.minute)
	{
		estInferieur = true;
	}
	else if (annee == uneDate.annee && mois == uneDate.mois &&
			jour == uneDate.jour && heure == uneDate.heure &&
			minute == uneDate.minute && seconde < uneDate.seconde)
	{
		estInferieur = true;
	}

	return estInferieur;
} //----- Fin de operator <

bool Date::operator > ( const Date & uneDate ) const
// Algorithme :
//
{
	Date self(*this);
	return  !(self <= uneDate);
} //----- Fin de operator >

bool Date::operator <= ( const Date & uneDate ) const
// Algorithme :
//
{
	Date self(*this);
	return  self == uneDate || self < uneDate;
} //----- Fin de operator <=


bool Date::operator >= ( const Date & uneDate ) const
// Algorithme :
//
{
	Date self(*this);
	return  !(self < uneDate);
} //----- Fin de operator >=

//-------------------------------------------- Constructeurs - destructeur
Date::Date ( const Date & uneDate ) : annee(uneDate.annee),
		mois(uneDate.mois), jour(uneDate.jour), heure(uneDate.heure),
		minute(uneDate.minute), seconde(uneDate.seconde)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Date>" << endl;
#endif
} //----- Fin de Date (constructeur de copie)

Date::Date ( int yyyy, int mm, int dd, int h, int m, int s, int g ) : annee(yyyy),
        mois(mm), jour(dd), heure(h), minute(m), seconde(s), gmt(g)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Date>" << endl;
#endif
} //----- Fin de Date


Date::Date ( int yyyy, int mm, int dd, int h, int m, int s ) : annee(yyyy),
		mois(mm), jour(dd), heure(h), minute(m), seconde(s)
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au constructeur de <Date>" << endl;
#endif
} //----- Fin de Date



Date::~Date ( )
// Algorithme :
//
{
#ifdef MAP
    cout << "Appel au destructeur de <Date>" << endl;
#endif
} //----- Fin de ~Date


//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees

//------------------------------------------------------- Methodes privees
