#include "Header.h"

Filiere::Filiere(string nom, int taille)
{
	this->nom = nom;
	this->tailleMax = taille;
	this->nbEtudiant = 0;
	T = new Etudiant[tailleMax];
}

Filiere::Filiere(Filiere const&F)
{
	this->nom = F.nom;
	this->tailleMax = F.tailleMax;
	this->nbEtudiant = F.nbEtudiant;
	this->T = new Etudiant[F.tailleMax];
	for (int i = 0; i < F.nbEtudiant; i++)
		this->T[i] = F.T[i];
}

Filiere::~Filiere()
{
	delete []T;
}

Filiere& Filiere::operator=(Filiere const&F)
{
	this->nom = F.nom;
	this->tailleMax = F.tailleMax;
	this->nbEtudiant = F.nbEtudiant;
	
	delete []this->T; // supprimer l'ancien tableau
	this->T = new Etudiant[F.tailleMax]; // reserver la mm taille que F.T 
	
	for (int i = 0; i < F.nbEtudiant; i++)
		this->T[i] = F.T[i];

	return *this;
}

void Filiere::ajouterEtudiant(Etudiant&E)
{
	if (nbEtudiant == tailleMax)
		etendre(2);

	T[nbEtudiant] = E;
	nbEtudiant++;
	
	
}

int Filiere::getTailleMax()
{
	return tailleMax;
}

int Filiere::getNbEtudiant()
{
	return nbEtudiant;
}

void Filiere::etendre(int x)
{
	Etudiant* nouv = new Etudiant[tailleMax + x];  //1
	
	for (int i = 0; i < nbEtudiant; i++)  //2
		nouv[i] = T[i];
	
	delete[]T;  //3

	T = nouv;
	tailleMax = tailleMax + x;
}

ostream& operator<<(ostream&flux, Filiere&F)
{
	flux << "Filiere " << F.nom << " contient " << F.nbEtudiant << " et de capacité max de " << F.tailleMax << " etudiants :" << endl;
	for (int i = 0; i < F.nbEtudiant; i++)
		flux << "\t- " << F.T[i] << endl;

	return flux;
}
