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

//    ParserDate(tmp);

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
    logLine.status = stoi(tmp,nullptr);

    getline(iss,tmp,separateur);
    logLine.bytesNumber = stoi(tmp,nullptr);

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

//Date LogParser::ParserDate ( string date )
//{
//    string tmp;
//    int annee;
//    int mois;
//    int jour;
//    int heure;
//    int minute;
//    int seconde;
//    int gmt;
//    char separateur;

//    istringstream iss(date);

//    separateur = '/';
//    getline(iss,tmp,separateur);
//    jour = stoi(tmp,nullptr);

//    getline(iss,tmp,separateur);
//    mois = Mois(tmp);

//    getline(iss,tmp,separateur);
//    annee = stoi(tmp,nullptr);

//    separateur = ':';
//    getline(iss,tmp,separateur);
//    getline(iss,tmp,separateur);
//    heure = stoi(tmp,nullptr);

//    getline(iss,tmp,separateur);
//    minute = stoi(tmp,nullptr);

//    getline(iss,tmp,separateur);
//    seconde = stoi(tmp,nullptr);

//    cout << jour << "/" << mois << "/" << annee << " " << heure <<
//            ":" << minute << ":" << seconde << " " << gmt << endl;
//}



//int LogParser::Mois ( string mois )
//{
//    int m = -1;

//    if ( mois == "Jan" )
//    {
//        m = 1;
//    }
//    else if ( mois == "Feb" )
//    {
//        m = 2;
//    }
//    else if ( mois == "Mar" )
//    {
//        m = 3;
//    }
//    else if ( mois == "Apr" )
//    {
//        m = 4;
//    }
//    else if ( mois == "May" )
//    {
//        m = 5;
//    }
//    else if ( mois == "Jui" )
//    {
//        m = 6;
//    }
//    else if ( mois == "Jul" )
//    {
//        m = 7;
//    }
//    else if ( mois == "Aug" )
//    {
//        m = 8;
//    }
//    else if ( mois == "Sep" )
//    {
//        m = 9;
//    }
//    else if ( mois == "Oct" )
//    {
//        m = 10;
//    }
//    else if ( mois == "Nov" )
//    {
//        m = 11;
//    }
//    else if ( mois == "Dec" )
//    {
//        m = 12;
//    }

//    return m;
//}

