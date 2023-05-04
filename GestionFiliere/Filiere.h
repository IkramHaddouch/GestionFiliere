#pragma once
class Filiere
{	string nom;
	Etudiant *T; // tableau dynamique de type : Etudiant
	int tailleMax;
	int nbEtudiant;

public:
	Filiere(string,int );
	Filiere(Filiere const&);
	~Filiere();
	Filiere& operator=(Filiere const&);
	friend ostream& operator<<(ostream&, Filiere&);
	void ajouterEtudiant(Etudiant&);
	//void supprimerEtudiant(Etudiant);
	int getTailleMax();
	int getNbEtudiant();
	void etendre(int x);
};