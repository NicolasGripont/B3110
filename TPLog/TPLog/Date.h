/*************************************************************************
                           Date.h  -  description
-------------------
debut      : 27/11/2015 22:30:09
copyright  : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail     : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <Date> (fichier Date.h) ------
#if ! defined ( DATE_H )
#define DATE_H

//--------------------------------------------------- Interfaces utilisees

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Role de la classe <Date>
// Classe permertant de créer un objet de type date
//
//------------------------------------------------------------------------

class Date
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques
    void Affiche( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool EstValide( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//----------------------------------------------------- Methodes publiques
	// type Methode ( liste de parametres );
	// Mode d'emploi :
	//
	// Contrat :
	//



//------------------------------------------------- Surcharge d'operateurs
    Date & operator = ( const Date & uneDate );
    // Mode d'emploi :
    // Redefinition de l'operateur =
    //
    // Contrat : aucun.
    //

    bool operator == ( const Date & uneDate );
    // Mode d'emploi :
    // Redefinition de l'operateur ==
    //
    // Contrat : aucun.
    //

    bool operator < ( const Date & uneDate ) const;
	// Mode d'emploi :
    // Redefinition de l'operateur <
    //
    // Contrat : aucun.
    //

    bool operator > ( const Date & uneDate ) const;
	// Mode d'emploi :
    // Redefinition de l'operateur >
    //
    // Contrat : aucun.
    //

    bool operator <= ( const Date & uneDate ) const;
	// Mode d'emploi :
    // Redefinition de l'operateur <=
    //
    // Contrat : aucun.
    //

    bool operator >= ( const Date & uneDate ) const;
	// Mode d'emploi :
    // Redefinition de l'operateur >=
    //
    // Contrat : aucun.
    //

//-------------------------------------------- Constructeurs - destructeur
    Date ( const Date & uneDate );
    // Mode d'emploi : constructeur de copie
    //
    // Contrat : aucun.
    //

    Date ( int yyyy, int mm, int dd, int h, int m, int s, int g );
    // Mode d'emploi : Constructeur.
    //
    // Contrat :
    //

    Date ( int yyyy, int mm, int dd, int h, int m, int s = 0 );
    // Mode d'emploi : Constructeur.
    //
    // Contrat : aucun.
    //

    virtual ~Date ( );
    // Mode d'emploi : Destructeur.
    //
    // Contrat : aucun.
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Methodes protegees

private:
//------------------------------------------------------- Methodes privees

protected:
//----------------------------------------------------- Attributs proteges

private:
//------------------------------------------------------- Attributs prives

    int annee;      // Valeur de l'annee.

    int mois;       // Valeur du mois.

    int jour;       // Valeur du jour.

    int heure;      // Valeur de l'heure.

    int minute;     // Valeur de la minute.

    int seconde;    // Valeur de la seconde.

    int gmt;        // Valeur de la difference de l’heure avec celle
                    // de Greenwich.


//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privees

//----------------------------------------------------------- Types prives

};

//----------------------------------------- Types dependants de <Date>

#endif // DATE_H
