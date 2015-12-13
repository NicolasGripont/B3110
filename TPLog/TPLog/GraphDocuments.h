/*************************************************************************
GraphDocuments  -  fichier d'en-tête de la classe <GraphDocuments>
-------------------
début                : 27/11/2015 22:27:39
copyright            : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail               : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/




//---------- Interface de la classe <GraphDocuments> (fichier GraphDocuments.h) ------
#if ! defined ( GraphDocuments_H )
#define GraphDocuments_H

//--------------------------------------------------- Interfaces utilisées

#include <vector>
#include <set>

using namespace std;

#include "Document.h"
#include "FoncteurDocument.h"



//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

template class std::set<Document*, DocumentPtrComp>;
template class std::vector<string>;
template class vector<Document>;

//------------------------------------------------------------------------
// Rôle de la classe <GraphDocuments>
// Classe permettant de definir un graph de documents pourun serveur
// (nom de domaine)
//
//------------------------------------------------------------------------

class GraphDocuments 
{
	//----------------------------------------------------------------- PUBLIC

public:
	//----------------------------------------------------- Méthodes publiques
    void TraiterLogLine ( LogLine l );
    // Mode d'emploi :
    // Methode permettant de traiter une ligne de log.
    // Ajoute et/ou met a jour les documents en fonction de la ligne de log.
	//
    // Contrat : aucun.
    //

    vector<Document*> TrierParNombreDeHitsReussis ();
    // Mode d'emploi :
    // Methode permettant de trier le vecteur en fonction du nombre de hits totals
    // reussis de maniere decroissante.
    //
    // Contrat : aucun.
    //

    const set<Document*, DocumentPtrComp> & Documents() const;
    // Mode d'emploi :
    // Accesseur en lecture sur l?attribut document.
    //
    // Contrat : aucun.
    //

    const string & NomDomaine() const;
    // Mode d'emploi :
    // Accesseur en lecture seule sur le nom de domaine.
    //
    // Contrat : aucun.
    //

	//------------------------------------------------- Surcharge d'opérateurs
    GraphDocuments & operator = (const GraphDocuments & unGraphDocuments);
    // Mode d'emploi :
    // Redefinition de l'operateur =
    //
    // Contrat : aucun.
    //

	//-------------------------------------------- Constructeurs - destructeur
	GraphDocuments(const GraphDocuments & unGraphDocuments);
    // Mode d'emploi : constructeur de copie
	//
    // Contrat : aucun.
	//

    GraphDocuments( string nD );
    // Mode d'emploi : Constructeur.
	//
    // Contrat : aucun.
	//

	virtual ~GraphDocuments();
    // Mode d'emploi : destructeur.
	//
    // Contrat : aucun.
	//

	//------------------------------------------------------------------ PRIVE

protected:
	//----------------------------------------------------- Méthodes protégées

    Document * DocumentPresent(string nomDomaine, string cheminAccesFichier );
    // Mode d'emploi :
    // Methode permettant de definir si un document ayant pour nom de domaine
    // nomDomaine et commen chemin d'acces cheminAccesFichier est deja present
    // dans le vector documents.
    //
    // Contrat : aucun.
    //



	//----------------------------------------------------- Attributs protégés

    set<Document*, DocumentPtrComp> documents;  // vecter contenant les documents du graph

    string nomDomaine;            // nom de domaine du serveur correspondant
                                  // au graph.
};

//--------------------------- Autres définitions dépendantes de <GraphDocuments>

#endif // GraphDocuments_H



