#include "Header.h"

Ecole::Ecole(string nom, string adresse)
{
	this->nom = nom;
	this->adresse = adresse;
	this->listeEtudiants = new Etudiant * [10];
	this->listeProfesseurs = new Professeur * [10];
	this->nbEtudiants = 0;
	this->nbProfesseurs = 0;
	this->tailleMaxEtudiants = 10;
	this->tailleMaxProfesseurs = 10;
}

void Ecole::ajouterEtudiant()
{
	string nom,filiere;
	int jour,mois,annee,niveau;
	cout << "la saisie des informations sur l'etudiant:" << endl;
	cout << "donner le nom:";
	cin >> nom;
	cout << "donner le jour de naissance:";
	cin >> jour;
	cout << "donner le moi de naissance:";
	cin >> mois;
	cout << "donner l'annee de naissance:";
	cin >> annee;
	cout << "donner la filiere:";
	cin >> filiere;
	cout << "donner le niveau:";
	cin >> niveau;
	Etudiant* e = new Etudiant(nom, jour, mois, annee, filiere, niveau);
	if (this->nbEtudiants == tailleMaxEtudiants)
		etendreListeEtudiants(5);
	this->listeEtudiants[this->nbEtudiants]=e;
	nbEtudiants++;

}

void Ecole::ajouterEtudiant(Etudiant* E)
{
	if (nbEtudiants == tailleMaxEtudiants)
		etendreListeEtudiants(5);
	listeEtudiants[nbEtudiants] = E;
	nbEtudiants++;
}

void Ecole::initialiser()
{
	Etudiant* E1 = new Etudiant("Zaim", 1, 12, 2001,"GI", 3);
	Etudiant* E2 = new Etudiant("Hicham", 2, 12, 2001, "GTR", 3);
	Etudiant* E3 = new Etudiant("Boucheta", 3, 12, 2001, "GM", 3);
	Etudiant* E4 = new Etudiant("Ahmed", 4, 12, 2001, "GI", 3);
	Etudiant* E5 = new Etudiant("Ikram", 5, 12, 2001, "GI", 3);
	Etudiant* E6 = new Etudiant("Hiba", 6, 12, 2001, "GIN", 3);
	Etudiant* E7 = new Etudiant("Nissrin", 7, 12, 2001, "GSE", 3);
	Etudiant* E8 = new Etudiant("Mehdi", 8, 12, 2001, "GI", 3);
	Etudiant* E9 = new Etudiant("Hamada", 9, 12, 2001, "GI", 3);
	Etudiant* E10 = new Etudiant("Ayoub", 10, 12, 2001, "GM", 3);
	Etudiant* E11 = new Etudiant("Ayoub", 11, 12, 2001, "GM", 3);
	Etudiant* E12 = new Etudiant("Ayoub", 12, 12, 2001, "GM", 3);

	this->ajouterEtudiant(E1);
	this->ajouterEtudiant(E2);
	this->ajouterEtudiant(E3);
	this->ajouterEtudiant(E4);
	this->ajouterEtudiant(E5);
	this->ajouterEtudiant(E6);
	this->ajouterEtudiant(E7);
	this->ajouterEtudiant(E8);
	this->ajouterEtudiant(E9);
	this->ajouterEtudiant(E10);
	this->ajouterEtudiant(E11);
	this->ajouterEtudiant(E12);
}

void Ecole::afficherEtudiants() {
	cout << "la liste des etudiants "<<nbEtudiants<<"/"<<tailleMaxEtudiants<<":\n";
	for (int i = 0; i < this->nbEtudiants; i++) {
		cout << "\t - " << *(this->listeEtudiants[i]) << endl;
	}
}

void Ecole::etendreListeEtudiants(int nb)
{
	Etudiant** List;
	List = new Etudiant * [nbEtudiants + nb];
	for (int i = 0; i < nbEtudiants; i++)
	{
		List[i] = listeEtudiants[i];
	}
	delete[]listeEtudiants;
	listeEtudiants = List;
	tailleMaxEtudiants += nb;

}

