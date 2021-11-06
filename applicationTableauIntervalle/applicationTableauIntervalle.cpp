// applicationTableauIntervalle.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//
// ************************
//  BOUGATTAYA CHAIMAE
//    ILISI2 / FSTM
//***************************

#include <iostream>
#include"Tableau.h"
#include"TableauBorne.h"
using namespace Tab;
using namespace std;
int main()
{
    cout << "Hello World!\n";
  /*
     Tableau T1(3);
    T1.remplir();
    cout << "\naffichage de T1 : \n";T1.print();

    Tableau T2(T1);
    cout << "\naffichage de T2 : \n"; T2.print();
    
    Tableau T3(2);
    T3.remplir();
    cout << "\naffichage de T3 : \n"; T3.print();
    
    Tableau T4=T3;
    cout << "\naffichage de T4 : \n"; T4.print();
    */
    /*T4 = T3;
    cout << "\naffichage de T4 : \n"; T4.print();
    */
    /*
    T1[0] = 0;
    T2[1] = 100;
    cout << "\n\nT1 : \n";
    T1.print();
    cout << "\n\nT2 : \n";
    T2.print();
    */




    TableauBorne  TB1(5, 11, 10);
    TB1.remplirTab();
    TB1.print();
    //TB1[0] = 5.7; //erreur car la modification via ce opérateur n'rst pas autorisé
    cout << TB1[0];
















}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
