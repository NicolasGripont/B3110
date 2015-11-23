/*************************************************************************
NombreDeHits  -  fichier d'en-t�te de la structure <NombreDeHits>
-------------------
d�but                : 23/11/2015 15:48:12
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la structure <NombreDeHits> (fichier NombreDeHits.h) ------
#if ! defined ( NombreDeHits_H )
#define NombreDeHits_H

//--------------------------------------------------- Interfaces utilis�es

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// R�le de la structure <NombreDeHits>
//
//
//------------------------------------------------------------------------

struct NombreDeHits 
{
	//----------------------------------------------------------------- PUBLIC

	//----------------------------------------------------- M�thodes publiques
	// type M�thode ( liste des param�tres );
	// Mode d'emploi :
	//
	// Contrat :
	//


	//------------------------------------------------- Surcharge d'op�rateurs
	NombreDeHits & operator = (const NombreDeHits & unNombreDeHits);
	// Mode d'emploi :
	//
	// Contrat :
	//


	//-------------------------------------------- Constructeurs - destructeur
	NombreDeHits(const NombreDeHits & unNombreDeHits);
	// Mode d'emploi (constructeur de copie) :
	//
	// Contrat :
	//

	NombreDeHits();
	// Mode d'emploi :
	//
	// Contrat :
	//

	virtual ~NombreDeHits();
	// Mode d'emploi :
	//
	// Contrat :
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- M�thodes prot�g�es

	//----------------------------------------------------- Attributs prot�g�s

};

//--------------------------- Autres d�finitions d�pendantes de <NombreDeHits>

#endif // NombreDeHits_H


