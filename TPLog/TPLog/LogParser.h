/*************************************************************************
LogParser  -  fichier d'en-tête de la classe <LogParser>
-------------------
début                : 27/11/2015 22:28:31
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <LogParser> (fichier LogParser.h) ------
#if ! defined ( LogParser_H )
#define LogParser_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <LogParser>
//
//
//------------------------------------------------------------------------

class LogParser : public Ancetre
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- Méthodes publiques
	// type Méthode ( liste des paramètres );
	// Mode d'emploi :
	//
	// Contrat :
	//


	//------------------------------------------------- Surcharge d'opérateurs
	LogParser & operator = (const LogParser & unLogParser);
	// Mode d'emploi :
	//
	// Contrat :
	//


	//-------------------------------------------- Constructeurs - destructeur
	LogParser(const LogParser & unLogParser);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	LogParser();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~LogParser();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- Méthodes protégées

	//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <LogParser>

#endif // LogParser_H


