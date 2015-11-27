/*************************************************************************
LogLine  -  fichier d'en-t�te de la classe <LogLine>
-------------------
d�but                : 27/11/2015 22:29:59
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <LogLine> (fichier LogLine.h) ------
#if ! defined ( LogLine_H )
#define LogLine_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la classe <LogLine>
//
//
//------------------------------------------------------------------------

class LogLine : public Ancetre
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
	//----------------------------------------------------- M�thodes prot�g�es

	//----------------------------------------------------- Attributs prot�g�s

};

//--------------------------- Autres d�finitions d�pendantes de <LogLine>

#endif // LogLine_H


