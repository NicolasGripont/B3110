/*************************************************************************
TestLog  -  Tests Unitaire de la classs LogParser et de la structure
                LogLine
-------------------
debut      : 27/11/2015 22:28:31
copyright  : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail     : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/

#ifndef TESTLISTE_H
#define TESTLISTE_H

//--------------------------------------------------- Interfaces utilisees
#include "LogLine.h"
#include "LogParser.h"

//---- Interface des fonctions de test <TestLog> (fichier TestLog.h) -----

//-------------------------------------------------------------- Fonctions

    void test( );
    // Mode d'emploi :
    // Fonction permettant
    //
    // Contrat :
    //
    //

    void test_LogParser_Parser( );
    // Mode d'emploi :
    // Fonction permettant de tester la methode Parser de
    // LogParser. Lit un fichier de log et créer de LogLine
    // avec la méthode Parser pour chaque ligne lue.
    // Puis affiche le LogLine
    //
    // Contrat :
    // Aucun.
    //

#endif // TESTLISTE_H
