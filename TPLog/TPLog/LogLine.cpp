/*************************************************************************
LogLine  -  fichier de realisation de la classe <LogLine>
-------------------
debut      : 27/11/2015 22:30:09
copyright  : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail     : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Realisation de la classe <LogLine> (fichier LogLine.cpp) --

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système

//------------------------------------------------------ Include personnel
#include "LogLine.h"

//------------------------------------------------------------- Constantes

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Methodes publiques
void  LogLine::Afficher ( )
// Algorithme :
//
{
    cout << clientIP << endl;
    cout << userLogName << endl;
    cout << authenticatedUser << endl;
    cout << date << endl;
    //date.Affiche();
    cout << actionType << endl;
    cout << requestedURL << endl;
    cout << httpVersion << endl;
    cout << status << endl;
    cout << bytesNumber <<endl;
    cout << referer << endl;
    cout << navigator << endl;
} //----- Fin de Methode


//------------------------------------------------- Surcharge d'operateurs
LogLine & LogLine::operator = ( const LogLine & unLogLine )
// Algorithme :
//
{
    clientIP = unLogLine.clientIP;
    userLogName = unLogLine.userLogName;
    authenticatedUser = unLogLine.authenticatedUser;
    date = unLogLine.date;
    actionType = unLogLine.actionType;
    requestedURL = unLogLine.requestedURL;
    httpVersion = unLogLine.httpVersion;
    status = unLogLine.status;
    bytesNumber = unLogLine.bytesNumber;
    referer = unLogLine.referer;
    navigator = unLogLine.navigator;
    return *this;
} //----- Fin de operator =


//-------------------------------------------- Constructeurs - destructeur
LogLine::LogLine ( const LogLine & unLogLine ) :
    clientIP(unLogLine.clientIP), userLogName(unLogLine.userLogName),
    authenticatedUser(unLogLine.authenticatedUser), date(unLogLine.date),
    actionType(unLogLine.actionType),
    requestedURL(unLogLine.requestedURL),
    httpVersion(unLogLine.httpVersion),
    status(unLogLine.status), bytesNumber(unLogLine.bytesNumber),
    referer(unLogLine.referer), navigator(unLogLine.navigator)
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de copie de <LogLine>" << endl;
#endif

} //----- Fin de LogLine (constructeur de copie)


LogLine::LogLine ( ) : clientIP(""), userLogName(""),
    authenticatedUser(""), date(0,0,0,0,0,0,0), actionType(""), requestedURL(""),
    httpVersion(""), status(0), bytesNumber(0), referer(""),
    navigator("")
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au constructeur de <LogLine>" << endl;
#endif
} //----- Fin de LogLine


LogLine::~LogLine ( )
// Algorithme :
//
{
#ifdef MAP
	cout << "Appel au destructeur de <LogLine>" << endl;
#endif
} //----- Fin de ~LogLine


  //------------------------------------------------------------------ PRIVE

  //----------------------------------------------------- Methodes protegees

