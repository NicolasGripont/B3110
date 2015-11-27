/*************************************************************************
Utilisateur  -  fichier d'en-t�te de la classe <Utilisateur>
-------------------
d�but                : 23/11/2015 15:37:58
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <Utilisateur> (fichier Utilisateur.h) ------
#if ! defined ( Utilisateur_H )
#define Utilisateur_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la classe <Utilisateur>
//
//
//------------------------------------------------------------------------

class Utilisateur
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
	Utilisateur & operator = (const Utilisateur & unUtilisateur);
	// Mode d'emploi :
	//
	// Contrat :
	//


	//-------------------------------------------- Constructeurs - destructeur
	Utilisateur(const Utilisateur & unUtilisateur);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	Utilisateur();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~Utilisateur();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- M�thodes prot�g�es

	//----------------------------------------------------- Attributs prot�g�s

};

//--------------------------- Autres d�finitions d�pendantes de <Utilisateur>

#endif // Utilisateur_H


