#include "Header.h"
int Etudiant::id = 0;
Etudiant::Etudiant()
{
	filiere = "SansFiliere";
	niveau = 1;
	matricule = id++;
}

Etudiant::Etudiant(string nom, Date x, string fil, int niv):Personne(nom,x)
{
	this->filiere = fil;
	this->niveau = niv;
	matricule = id++;
}

Etudiant::Etudiant(string n, int j, int m, int a, string f, int niv):Personne(n,j, m,a)
{
	this->filiere = f;
	this->niveau = niv;
	matricule = id++;
}

Etudiant::~Etudiant()
{
	matricule = id--;
}

Etudiant::Etudiant(Etudiant const& E): Personne(E)
{
	this->filiere = E.filiere;
	this->niveau = E.niveau;
	matricule = id++;
}

Etudiant& Etudiant::operator=(Etudiant const&E)
{
	this->Personne::operator=(E);
	this->filiere = E.filiere;
	this->niveau = E.niveau;
	return *this;
}

ostream& operator<<(ostream&flux, Etudiant& E)
{
	Personne x = E;
	return flux << "Etudiant : ["<< x << ", filiere="<< E.filiere << ", niveau=" << E.niveau <<", matricule="<<E.matricule<< "]";
}