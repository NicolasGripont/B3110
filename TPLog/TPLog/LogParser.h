/*************************************************************************
LogParser  -  fichier d'en-t�te de la classe <LogParser>
-------------------
debut      : 27/11/2015 22:28:31
copyright  : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail     : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <LogParser> (fichier LogParser.h) ----
#if ! defined ( LogParser_H )
#define LogParser_H

//--------------------------------------------------- Interfaces utilisees

#include "LogLine.h"
#include "Date.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la classe <LogParser> : Classe permettant de creer des objets
// de type LogLine. Cette classe ne contient qu?une methode de classe
// (static), nous avons donc interdit de construire un objet de ce type.
//------------------------------------------------------------------------

class LogParser
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques
    static LogLine Parser (string line , string domainName);
	// Mode d'emploi :
    // Methode permettant de creer un  objet de type LogLine � partir d'une
    // string contenant une ligne de log d'un fichier de log Apache et
    // � partir du nom de domaine du serveur apache g�n�rant le fichier
    // de logs.
	//
	// Contrat :
    // Il faut que la ligne donn�e en param�tre soit
    // valide. Sinon l'objet LogLine retourn� ne sera pas valide.
	//


    static string Extension ( string cheminAcces );
    // Mode d'emploi :
    // Methode de classe permettant de recuperer l'extension d'un fichier
    // a partir d?une string contenant son chemin d?acces.
    // Contrat : aucun.
    //
    //

//------------------------------------------------- Surcharge d'operateurs
    LogParser & operator = ( const LogParser & unLogParser );
    // Mode d'emploi :
    // Operateur "=" interdit.
	//
    // Contrat :
    // Aucun.
	//


//-------------------------------------------- Constructeurs - destructeur
    LogParser ( const LogParser & unLogParser );
	// Mode d'emploi (constructeur de copie) :
    // Constructeur de copie interdit.
    //
    // Contrat :
    // Aucun.
	//

    LogParser ( );
	// Mode d'emploi :
    // Constructeur par defaut interdit.
    //
    // Contrat :
    // Aucun.
	//

    virtual ~LogParser ( );
	// Mode d'emploi :
    // Destructeur interdit.
    //
	// Contrat :
	//

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Methodes protegees

    static Date ParserDate ( string date );
    // Mode d'emploi :
    // Methode permettant de creer un objet de type Date � partir d'une
    // string contenant le champs date d'une ligne de log d'un
    // fichier de log Apache.
    //
    // Contrat : aucun.
    //
    //

    static int Mois ( string mois );
    // Mode d'emploi :
    // Methode permettant de convertir un mois anglais
    // (sur 3 lettres, ex :Sep) en int
    //
    // Contrat : aucun.
    //
    //

    static string SplitReferer ( string referer, string domainName );
    // Mode d'emploi :
    // Methode permettant de recuperer le fichier d'une url contenant
    // le nom de domaine donne en parametre. Retourne "-" si l'url
    // (referer) ne contient pas le nom de domain.
    //
    // Contrat : aucun.
    //
    //


//----------------------------------------------------- Attributs proteges

};

//--------------------------- Autres definitions dependantes de <LogParser>

#endif // LogParser_H


