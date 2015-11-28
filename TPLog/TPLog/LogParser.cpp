/*************************************************************************
LogParser  -  fichier de realisation de la classe <LogParser>
-------------------
debut      : 27/11/2015 22:28:52
copyright  : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail     : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//-------- Realisation de la classe <LogParser> (fichier LogParser.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système

#include <sstream>
#include <string>
using namespace std;
//------------------------------------------------------ Include personnel
#include "LogParser.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques
LogLine LogParser::Parser( string line )
// Algorithme :
//
{
    LogLine logLine;
    string tmp;
    char separateur;

    istringstream iss(line);

    separateur = ' ';
    getline(iss,tmp,separateur);
    logLine.clientIP = tmp;

    getline(iss,tmp,separateur);
    logLine.userLogName = tmp;

    getline(iss,tmp,separateur);
    logLine.authenticatedUser = tmp;

    separateur = '[';
    getline(iss,tmp,separateur);
    separateur = ']';
    getline(iss,tmp,separateur);
    logLine.date = tmp;

    separateur = '"';
    getline(iss,tmp,separateur);
    separateur = ' ';
    getline(iss,tmp,separateur);
    logLine.actionType = tmp;

    getline(iss,tmp,separateur);
    logLine.requestedURL = tmp;

    separateur = '"';
    getline(iss,tmp,separateur);
    logLine.httpVersion = tmp;

    separateur = ' ';
    getline(iss,tmp,separateur);
    getline(iss,tmp,separateur);
    logLine.status = tmp;

    getline(iss,tmp,separateur);
    logLine.bytesNumber = tmp;

    separateur = '"';
    getline(iss,tmp,separateur);
    getline(iss,tmp,separateur);
    logLine.referer = tmp;

    getline(iss,tmp,separateur);
    getline(iss,tmp,separateur);
    logLine.navigator = tmp;

    return logLine;
} //----- Fin de Methode



//------------------------------------------------- Surcharge d'operateurs


//-------------------------------------------- Constructeurs - destructeur




//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees

