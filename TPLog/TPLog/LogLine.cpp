/*************************************************************************
LogLine  -  fichier de r�alisation de la classe <LogLine>
-------------------
d�but                : 27/11/2015 22:30:09
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- R�alisation de la classe <LogLine> (fichier LogLine.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include syst�me
using namespace std;
#include <iostream>

//------------------------------------------------------ Include personnel
#include "LogLine.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- M�thodes publiques
// type LogLine::M�thode ( liste des param�tres )
// Algorithme :
//
//{
//} //----- Fin de M�thode


//------------------------------------------------- Surcharge d'op�rateurs
LogLine & LogLine::operator = (const LogLine & unLogLine)
// Algorithme :
//
{
} //----- Fin de operator =


  //-------------------------------------------- Constructeurs - destructeur
LogLine::LogLine(const LogLine & unLogLine)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <LogLine>" << endl;
#endif
} //----- Fin de LogLine (constructeur de copie)


LogLine::LogLine()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <LogLine>" << endl;
#endif
} //----- Fin de LogLine


LogLine::~LogLine()
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <LogLine>" << endl;
#endif
} //----- Fin de ~LogLine


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- M�thodes prot�g�es

