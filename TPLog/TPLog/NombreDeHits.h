/*************************************************************************
NombreDeHits  -  fichier d'en-tête de la structure <NombreDeHits>
-------------------
début                : 23/11/2015 15:48:12
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la structure <NombreDeHits> (fichier NombreDeHits.h) ------
#if ! defined ( NombreDeHits_H )
#define NombreDeHits_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la structure <NombreDeHits>
// Class permettant de stocker un nombre de hits par heure et par status
// (reussi  ou echec)
//
//------------------------------------------------------------------------

class NombreDeHits
{
//----------------------------------------------------------------- PUBLIC
public:
	//----------------------------------------------------- Méthodes publiques
	int NombreDeHitsPourUneHeure ( int uneHeure, bool UniquementReussi = true );
	// Mode d'emploi :
    // Methode permettant de recuperer le nombre de hits pour une heure donnee
    // (UniquementReussi = true , uniquement les hits reussis sinon tous)
	//
    // Contrat : aucun.
	//

    int NombreDeHitsTotal( bool UniquementReussi = true ) const;
    // Mode d'emploi :
    // Methode permettant de recuperer le nombre de hits
    // (UniquementReussi = true , uniquement les hits reussis sinon tous)
    //
    // Contrat : aucun.
    //

	//------------------------------------------------- Surcharge d'opérateurs
	NombreDeHits & operator = (const NombreDeHits & unNombreDeHits);
	// Mode d'emploi :
    // Redefinition de l'operateur =
    //
    // Contrat : aucun.
	//

    void MAJHits ( bool status, int heure );
    // Mode d'emploi :
    // Méthode permettant d'incrémenter le nombre de hits en fonction d'un
    // status (reussi : true, echec : false) et d'une heure.
    // Ne fait rien si heure < 0 et heure >= 24
    //
    // Contrat : aucun.
    //

	//-------------------------------------------- Constructeurs - destructeur
	NombreDeHits(const NombreDeHits & unNombreDeHits);
    // Mode d'emploi : constructeur de copie
	//
	// Contrat :
	//

	NombreDeHits();
    // Mode d'emploi : constructeur
	// 
    // Contrat : aucun.
	//

	virtual ~NombreDeHits();
    // Mode d'emploi : destructeur.
	//
    // Contrat : aucun.
	//

    //------------------------------------------------------------------ PRIVE

protected:
    //----------------------------------------------------- Méthodes protégées


    //----------------------------------------------------- Attributs protégés

    static const int NB_HEURE_PAR_JOUR = 24;            //nombre d'heure par jour

    int nombreDeHitsReussisParHeure[NB_HEURE_PAR_JOUR]; // tableau contenant le
                                                        // nombre de hits reussis
                                                        // par heure

    int nombreDeHitsEchouesParHeure[NB_HEURE_PAR_JOUR]; // tableau contenant le
                                                        // nombre de hits echoues
                                                        // par heure

};

//--------------------------- Autres définitions dépendantes de <NombreDeHits>

#endif // NombreDeHits_H


