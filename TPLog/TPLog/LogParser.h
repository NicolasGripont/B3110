/*************************************************************************
LogParser  -  fichier d'en-tête de la classe <LogParser>
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
// Rôle de la classe <LogParser> : Classe permettant de creer des objets
// de type LogLine. Cette classe ne contient qu?une methode de classe
// (static), nous avons donc interdit de construire un objet de ce type.
//------------------------------------------------------------------------

class LogParser
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques
    static LogLine Parser ( string line );
	// Mode d'emploi :
    // Methode permettant de creer un de type LogLine à partir d'une
    // string contenant une ligne de log d'un fichier de log Apache.
	//
	// Contrat :
    // Il faut que la ligne donnée en paramètre soit
    // valide. Sinon l'objet LogLine retourné ne sera pas valide.
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

//    static Date ParserDate ( string date );
//    // Mode d'emploi :
//    // Methode permettant de creer un de type Date à partir d'une
//    // string contenant le champs date d'une ligne de log d'un
//    // fichier de log Apache.
//    //
//    // Contrat :
//    //
//    //

//    static int Mois ( string mois );
//    // Mode d'emploi :
//    //
//    //
//    // Contrat :
//    //
//    //

//----------------------------------------------------- Attributs proteges

};

//--------------------------- Autres definitions dependantes de <LogParser>

#endif // LogParser_H


