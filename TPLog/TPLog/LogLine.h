/*************************************************************************
LogLine  -  fichier d'en-tête de la classe <LogLine>
-------------------
debut      : 27/11/2015 22:29:59
copyright  : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail     : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

//---------- Interface de la classe <LogLine> (fichier LogLine.h) ------
#if ! defined ( LogLine_H )
#define LogLine_H

//--------------------------------------------------- Interfaces utilisees
#include <iostream>
using namespace std;

#include "Date.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la structure <LogLine> : Structure permettant de creer un objet
// regroupant tous les champs d?une ligne de log generee par un serveur
// Apache. Chaque attribut de la structure correspond un d?une ligne de
// log.
//------------------------------------------------------------------------

struct LogLine
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Methodes publiques

    void Afficher ( );
    // Mode d'emploi :
    // Méthode permettant d'afficher tous les champs de LogLine.
    //
    // Contrat : aucun.
    //

//------------------------------------------------- Surcharge d'operateurs
    LogLine & operator = ( const LogLine & unLogLine );
    // Mode d'emploi :
    // Surcharge de l'operateur egale (=).
	//
    // Contrat : aucun.
	//


//-------------------------------------------- Constructeurs - destructeur
    LogLine ( const LogLine & unLogLine );
    // Mode d'emploi (constructeur de copie) :
    // Constructeur de copie.
	//
    // Contrat : aucun.
	//

    LogLine ( );
    // Mode d'emploi :
    // Constructeur par defaut. Initailise tous les attributs
    // (string) à "".
	//
    // Contrat : aucun.
	//

    virtual ~LogLine ( );
    // Mode d'emploi :
    // Destructeur.
	//
	// Contrat :
	//

//------------------------------------------------------ Attributs publics

    string clientIP;            // Adresse IP du client emetteur de la
                                // requête.

    string userLogName;         // User Log Name, soit le nom
                                // d?utilisateur du visiteur.

    string authenticatedUser;   // Nom d?utilisateur que l?internaute
                                // s?est donne lui-même.

    Date date;                // Date et Heure de la requête avec GMT.

    string actionType;          // Type d?action executee (GET, POST,
                                // OPTIONS, ?).

    string requestedURL;        // URL demandee, relative à l?URL stockee
                                // dans referer.

    string httpVersion;         // Version du protocole HTTP.

    int status;              // Code de retour de la reponse du
                                // serveur.

    int bytesNumber;         // Nombre d'octets de la reponse.

    string referer;             // Adresse sur laquelle le navigateur se
                                // trouvait lorsqu?il a effectue sa
                                // requête.

    string navigator;           // Identification du client navigateur.

};

//--------------------------- Autres definitions dependantes de <LogLine>

#endif // LogLine_H


