/*************************************************************************
LogParser  -  fichier de réalisation de la classe <LogParser>
-------------------
début                : 27/11/2015 22:28:52
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Réalisation de la classe <LogParser> (fichier LogParser.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "LogParser.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques
// type LogParser::Méthode ( liste des paramètres )
// Algorithme :
//
//{
//} //----- Fin de Méthode


//------------------------------------------------- Surcharge d'opérateurs
LogParser & LogParser::operator = (const LogParser & unLogParser)
// Algorithme :
//
{
} //----- Fin de operator =


  //-------------------------------------------- Constructeurs - destructeur
LogParser::LogParser(const LogParser & unLogParser)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <LogParser>" << endl;
#endif
} //----- Fin de LogParser (constructeur de copie)


LogParser::LogParser()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <LogParser>" << endl;
#endif
} //----- Fin de LogParser


LogParser::~LogParser()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <LogParser>" << endl;
#endif
} //----- Fin de ~LogParser


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- Méthodes protégées

