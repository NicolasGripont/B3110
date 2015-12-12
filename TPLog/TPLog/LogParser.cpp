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
#include <iostream>
#include <string>
#include <regex>

using namespace std;
//------------------------------------------------------ Include personnel
#include "LogParser.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques
LogLine LogParser::Parser( string line, string domainName)
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
    logLine.date = ParserDate(tmp);

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
    logLine.status = stoi(tmp);

    getline(iss,tmp,separateur);
    if (tmp != "-")
    {
        logLine.bytesNumber = stoi(tmp);
    }
    else
    {
        logLine.bytesNumber = 0;
    }

    separateur = '"';
    getline(iss,tmp,separateur);
    getline(iss,tmp,separateur);
    logLine.domainName = domainName;
    logLine.sourceFile = SplitReferer (tmp,  domainName);

    getline(iss,tmp,separateur);
    getline(iss,tmp,separateur);
    logLine.navigator = tmp;

    return logLine;
} //----- Fin de Parser



//------------------------------------------------- Surcharge d'operateurs


//-------------------------------------------- Constructeurs - destructeur



//------------------------------------------------------------------ PRIVE

//----------------------------------------------------- Methodes protegees

Date LogParser::ParserDate ( string date )
// Algorithme :
//
{
    int annee = 0;
    int mois = 0;
    int jour = 0;
    int heure = 0;
    int minute = 0;
    int seconde = 0;
    int gmt = 0;

    regex rgx("([0-9]{2})/([A-Z][a-z][a-z])/([0-9]{4})[ ]?:([0-9]{2}):([0-9]{2}):([0-9]{2})[ ]([+-][0-9]{4})");
    smatch match;
    if (std::regex_search(date, match, rgx))
    {
        jour = stoi(match[1]);
        mois = Mois(match[2]);
        annee = stoi(match[3]);
        heure = stoi(match[4]);
        minute = stoi(match[5]);
        seconde = stoi(match[6]);
        gmt = stoi(match[7]);
    }

    return Date(annee,mois,jour,heure,minute,seconde,gmt);
} //----- Fin de ParserDate



int LogParser::Mois ( string mois )
// Algorithme :
//
{
    int m = -1;


    if ( mois == "Jan" )
    {
        m = 1;
    }
    else if ( mois == "Feb" )
    {
        m = 2;
    }
    else if ( mois == "Mar" )
    {
        m = 3;
    }
    else if ( mois == "Apr" )
    {
        m = 4;
    }
    else if ( mois == "May" )
    {
        m = 5;
    }
    else if ( mois == "Jui" )
    {
        m = 6;
    }
    else if ( mois == "Jul" )
    {
        m = 7;
    }
    else if ( mois == "Aug" )
    {
        m = 8;
    }
    else if ( mois == "Sep" )
    {
        m = 9;
    }
    else if ( mois == "Oct" )
    {
        m = 10;
    }
    else if ( mois == "Nov" )
    {
        m = 11;
    }
    else if ( mois == "Dec" )
    {
        m = 12;
    }

    return m;
} //----- Fin de Mois


string LogParser::SplitReferer (string referer, string domainName)
// Algorithme :
//
{
    string result;

    string tmpRgx = "https?://";
    tmpRgx += domainName;
    tmpRgx += ("(.*)");

    regex rgx(tmpRgx);
    smatch match;

    if (std::regex_search(referer, match, rgx))
    {
        result = match[1];
    }
    else
    {
        result = "-";
    }
    return result;
} //----- Fin de SplitReferer

