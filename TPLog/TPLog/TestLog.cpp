/*************************************************************************
TestLog  -  Tests Unitaire de la classs LogParser et de la structure
                LogLine
-------------------
debut      : 27/11/2015 22:28:31
copyright  : (C) 2015 par Quentin SCHROTER, Nicolas GRIPONT
e-mail     : quentin.schroter@insa-lyon.fr , nicolas.gripont@insa-lyon.fr
*************************************************************************/


//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include systeme
#include <iostream>
#include <string>
#include <fstream>

using namespace std;
//------------------------------------------------------ Include personnel
#include "TestLog.h"

//------------------------------------------------------------- Constantes


//-------------------------------------------------------------- Fonctions

void test_LogParser_Parser()
// Algorithme :
//
{
    ifstream fichier("TEST.txt", ios::in);

    if(fichier)
    {
        string line;
        while ( getline(fichier,line) )
        {
            LogLine ll = LogParser::Parser(line);
            ll.Afficher();
            cout<<endl;
        }
        fichier.close();
    }
    else
    {
        cerr << "Impossible d'ouvrir le fichier !" << endl;
    }
}//----- Fin de test


void test()
// Algorithme :
//
{

}//----- Fin de test

