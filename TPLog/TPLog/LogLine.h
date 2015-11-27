/*************************************************************************
LogLine  -  fichier d'en-tête de la classe <LogLine>
-------------------
début                : 27/11/2015 22:29:59
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <LogLine> (fichier LogLine.h) ------
#if ! defined ( LogLine_H )
#define LogLine_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <LogLine>
//
//
//------------------------------------------------------------------------

class LogLine : public Ancetre
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
	LogLine & operator = (const LogLine & unLogLine);
	// Mode d'emploi :
	//
	// Contrat :
	//


	//-------------------------------------------- Constructeurs - destructeur
	LogLine(const LogLine & unLogLine);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	LogLine();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~LogLine();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- Méthodes protégées

	//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <LogLine>

#endif // LogLine_H


