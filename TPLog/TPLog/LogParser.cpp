/*************************************************************************
LogParser  -  fichier de r�alisation de la classe <LogParser>
-------------------
d�but                : 27/11/2015 22:28:52
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- R�alisation de la classe <LogParser> (fichier LogParser.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "LogParser.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type LogParser::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs
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

  //----------------------------------------------------- M�thodes prot�g�es

