#pragma once
class Ecole
{
	string nom;
	string adresse;
	Etudiant** listeEtudiants;
	Professeur** listeProfesseurs;
	int tailleMaxEtudiants;
	int tailleMaxProfesseurs;
	int nbEtudiants;
	int nbProfesseurs;
public:
	Ecole(string, string);
	void ajouterEtudiant();
	void ajouterEtudiant(Etudiant* E);
	void initialiser();
	void afficherEtudiants();
	void etendreListeEtudiants(int);
};

