// GestionFiliere.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include "Header.h"
void testerContructeurCopie()
{
    Date x, y(1, 2, 3);
    Date c(x), d(y);

    cout << x << endl;
    cout << y << endl;
    cout << c << endl;
    cout << d << endl;
}
void testerDate()
{
    int a = 10, b = 20;
    Date x(10,10,30), y(10, 20, 30), * p;
    p = &x;
    //x.setJour(200);
   // x.afficher();
  //  p->afficher();
    cout << "== " << (x ==y ) <<endl;
    /*cout << "!= " << (x != y) << endl;
    cout << ">  " << (x > y) << endl;
    cout << ">= " << (x >= y) << endl;
    cout << "<  " << (x < y) << endl;
    cout << "<= " << (x <= y) << endl;
    x = y;*/
    cout << x;

}
void testerPersonne() {
    Date x(12, 01, 2000);
    Personne p1;
    Personne p2("imane", x);
    Personne p3("mehdi", 12, 1, 2000);
    cout << p1 << endl;
    cout << p2 << endl;
    cout << p3 << endl;
    cout << "op ==  :" <<(p2 == p3) << endl;
    cout << "op !=  :" << (p2 != p3) << endl;
    cout << "op >   :" << (p2 > p3) << endl;
    cout << "op >=  :" << (p2 >= p3) << endl;
    cout << "op <   :" << (p2 < p3) << endl;
    cout << "op <=  :" << (p2 <= p3) << endl;
}
void testerEtudiant()
{   cout<<"--------------- Test de la classe Etudiant -----------------"<<endl<<endl;
    Date d(12, 2, 1999);
    Etudiant E1("AAA", d,"Genie Electrique",2);
    Etudiant E2("B", 1, 1, 2021, "Genie Informatique", 1);
    Etudiant* E3 = new Etudiant("Etudiant Dynamique", 1,2,2003, "Genie Telecom", 5);
    cout << endl << "-----> affichage initial" << endl;
    cout << "E1 : " << E1 << endl;
    cout << "E2 : " << E2 << endl;
    cout << "E3 : " << *E3 << endl;
    cout << "adresse memoire de E3 : " << E3 << endl;
    delete E3;
    cout << endl << "-----> affichage apres suppression de E3" << endl;
    cout << "E1 : " << E1 << endl;
    cout << "E2 : " << E2 << endl;
   // cout << "E3 : " << *E3 << endl;
    cout <<endl<< "-----> allouer a nouveau la memoire pour E3" << endl;
    E3 = new Etudiant("Etudiant Dynamique 2", 1, 2, 2005, "Genie Reseaux", 5);
    cout << "E1 : " << E1 << endl;
    cout << "E2 : " << E2 << endl;
    cout << "E3 : " << *E3 << endl;
    cout << endl << "-----> modifier les noms de E1 et E3" << endl;
    E1.setNom("Kamal");
    E3->setNom("Plus Dynamique");
    E1.setDateNaissance(20,3,2010);
    cout << "E1 : " << E1 << endl;
    cout << "E2 : " << E2 << endl;
    cout << "E3 : " << *E3 << endl;
}
void testerProfesseur()
{

}
void testerFiliere()
{
    Filiere F("Genie Electrique", 3);
    Etudiant E1("A", 1, 1, 2021, "Genie", 1);
    Etudiant E2("B", 1, 1, 2021, "Genie", 2);
    Etudiant E3("C", 1, 1, 2021, "Genie", 3);
    Etudiant E4("D", 1, 1, 2021, "Genie", 4);
    Etudiant E5("E", 1, 1, 2021, "Genie", 5);
    Etudiant E6("F", 1, 1, 2021, "Genie", 6);

    F.ajouterEtudiant(E1);
    F.ajouterEtudiant(E2);
    F.ajouterEtudiant(E3);
    F.ajouterEtudiant(E4);
    F.ajouterEtudiant(E5);
    F.ajouterEtudiant(E6);
    cout << F;

}
void testerAttributStatique()
{
    Date x;
    Personne p1("A", 1, 1, 2021);
    Personne p2(p1);
    Personne p3("C", x);
    Etudiant* E1 = new Etudiant("A", 1, 1, 2021, "Genie", 1);
    Etudiant E2("B", 1, 1, 2021, "Genie", 2);
    Etudiant E3("C", 1, 1, 2021, "Genie", 3);
    
    cout << "p1 : " << p1 << endl;
    cout << "p2 : " << p2 << endl;
    cout << "p3 : " << p3 << endl;
    cout << "E1 : " << *E1 << endl;
    cout << "E2 : " << E2 << endl;
    cout << "E3 : " << E3 << endl;
}

void testerGestionEcole()
{
    Ecole ecole("Ensa","Fes");
    ecole.initialiser();
    ecole.afficherEtudiants();
    ecole.ajouterEtudiant();
    ecole.afficherEtudiants();
}
int main()
{
    cout << "Hello World!\n";
    //testerDate();
    //testerContructeurCopie();
    //testerPersonne();
    //testerEtudiant();
    //testerFiliere();
    //testerAttributStatique();
    testerGestionEcole();
    cout << "Fin programme !";
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
