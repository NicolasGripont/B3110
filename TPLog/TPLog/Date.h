/*************************************************************************
                           Date.h  -  description
                             -------------------
    debut                : 19/10
    copyright            : (C) 2015 par Nicolas Gripont, Quentin Schroter
*************************************************************************/

//---------- Interface de la classe <Date> (fichier Date.h) ------
#if ! defined ( DATE_H )
#define DATE_H

//--------------------------------------------------- Interfaces utilisees

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rele de la classe <Date>
//
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
    //
    // Contrat :
    //

    bool operator == ( const Date & uneDate );
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool operator < ( const Date & uneDate ) const;
	// Mode d'emploi :
	//
	// Contrat :
	//

    bool operator > ( const Date & uneDate ) const;
	// Mode d'emploi :
	//
	// Contrat :
	//
    bool operator <= ( const Date & uneDate ) const;
	// Mode d'emploi :
	//
	// Contrat :
	//

    bool operator >= ( const Date & uneDate ) const;
	// Mode d'emploi :
	//
	// Contrat :
	//

//-------------------------------------------- Constructeurs - destructeur
    Date ( const Date & uneDate );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Date ( int yyyy, int mm, int dd, int h, int m, int s = 0 );
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Date ( );
    // Mode d'emploi :
    //
    // Contrat :
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

    int annee;

    int mois;

    int jour;

    int heure;

    int minute;

    int seconde;



//---------------------------------------------------------- Classes amies

//-------------------------------------------------------- Classes privees

//----------------------------------------------------------- Types prives

};

//----------------------------------------- Types dependants de <Date>

#endif // DATE_H