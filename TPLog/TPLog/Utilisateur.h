/*************************************************************************
Utilisateur  -  fichier d'en-tête de la classe <Utilisateur>
-------------------
début                : 23/11/2015 15:37:58
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <Utilisateur> (fichier Utilisateur.h) ------
#if ! defined ( Utilisateur_H )
#define Utilisateur_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Utilisateur>
//
//
//------------------------------------------------------------------------

class Utilisateur
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
	//----------------------------------------------------- Méthodes protégées

	//----------------------------------------------------- Attributs protégés

};

//--------------------------- Autres définitions dépendantes de <Utilisateur>

#endif // Utilisateur_H


