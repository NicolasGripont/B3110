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
// Role de la structure <Date>
// Structure permertant de créer un objet de type date
//
//------------------------------------------------------------------------

struct Date
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques


//------------------------------------------------- Surcharge d'operateurs
    Date & operator = ( const Date & uneDate );
    // Mode d'emploi :
    // Redefinition de l'operateur = pour une Date
    //
    // Contrat : aucun.
    //

    friend ostream & operator << (ostream & os, Date &d);
    // Mode d'emploi :
    // Redefinition de l'operateur << pour un ostream
    //
    // Contrat : aucun.
    //

//-------------------------------------------- Constructeurs - destructeur
    Date ( const Date & uneDate );
    // Mode d'emploi : Constructeur de copie
    //
    // Contrat : aucun.
    //

    Date ( int yyyy, int mm, int dd, int h, int m, int s = 0, int g = 0 );
    // Mode d'emploi : Constructeur.
    //
    // Contrat :
    //

    virtual ~Date ( );
    // Mode d'emploi : Destructeur.
    //
    // Contrat : aucun.
    //

//------------------------------------------------------ Attributs publics

    int annee;      // Valeur de l'annee.

    int mois;       // Valeur du mois.

    int jour;       // Valeur du jour.

    int heure;      // Valeur de l'heure.

    int minute;     // Valeur de la minute.

    int seconde;    // Valeur de la seconde.

    int gmt;        // Valeur de la difference de l’heure avec celle
                    // de Greenwich.

};

//----------------------------------------- Types dependants de <Date>

#endif // DATE_H
