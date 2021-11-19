// GestionEntreprise.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include <vector>
#include "Personne.h"
#include "Employe.h"
#include"Responsable.h"
using namespace std;
int main()
{
    Employe* p;
    p = new Employe("E1", "E1", 25, 12.3);
    Employe* E2= new Employe("E2", "E2", 25, 12.3);
    Employe* E3 = new Employe("E3", "E3", 25, 12.3);
    Responsable* R1 = new Responsable("R1", "R1", 30, 20, "CEO");
    Responsable* R2 = new Responsable("R2", "R2", 30, 20, "chef de projet");
    R1->ajouterSubr(*E2);
    R1->ajouterSubr(*p);
    R2->ajouterSubr(*E3);
    R1->ajouterSubr(*R2);
   // R2->ajouterSubr(*R1);
   // R2->afficher();
    R1->afficher();
   
    delete R1;

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
