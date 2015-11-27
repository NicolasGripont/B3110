/*************************************************************************
LogParser  -  fichier d'en-t�te de la classe <LogParser>
-------------------
d�but                : 27/11/2015 22:28:31
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <LogParser> (fichier LogParser.h) ------
#if ! defined ( LogParser_H )
#define LogParser_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la classe <LogParser>
//
//
//------------------------------------------------------------------------

class LogParser : public Ancetre
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste des param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//


	//------------------------------------------------- Surcharge d'op�rateurs
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
	//----------------------------------------------------- M�thodes prot�g�es

	//----------------------------------------------------- Attributs prot�g�s

};

//--------------------------- Autres d�finitions d�pendantes de <LogParser>

#endif // LogParser_H


