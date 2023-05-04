#include "Header.h"
//int Personne::id = 0;
Personne::Personne(): dateNaissance(10,20,30)
{
	this->nom = "SansNom";
	//matricule = id;
	//id++;
}
Personne::Personne(string nom, Date x)//:dateNaissance(x)
{
	this->nom = nom;
	this->dateNaissance = x;
	//matricule = id;
	//id++;
}
Personne::Personne(string nom, int j, int m, int a)//:dateNaissance(j,m,a)
{
	this->nom = nom;
	this->dateNaissance.setJour(j);
	this->dateNaissance.setMois(m);
	this->dateNaissance.setAnnee(a);
	//matricule = id;
	//id++;
}
Personne::Personne(Personne const& x):dateNaissance(x.dateNaissance)
{	this->nom = x.nom;
	//matricule = id;
	//id++;
}
Personne::~Personne()
{
	//id--;
}
Personne& Personne::operator=(Personne const& x)
{
	this->nom = x.nom;
	this->dateNaissance = x.dateNaissance;
	return *this;
}
void Personne::setNom(string nom)
{
	this->nom = nom;
}
void Personne::setDateNaissance(Date x)
{
	this->dateNaissance = x;
}
void Personne::setDateNaissance(int j, int m, int a)
{
	this->dateNaissance.setJour(j);
	this->dateNaissance.setMois(m);
	this->dateNaissance.setAnnee(a);
}
string Personne::getNom()
{
	return this->nom;
}
Date Personne::getDateNaissiance()
{
	return this->dateNaissance;
}
bool Personne::operator==(Personne const& x)
{
	if (this->dateNaissance == x.dateNaissance) {
		return true;
	}
	else {
		return false;
	}
}
bool Personne::operator!=(Personne const& x)
{
	if (*this == x)
		return false;
	else
		return true;
}
bool Personne::operator>(Personne const& x)
{
	if (this->dateNaissance < x.dateNaissance)
		return true;
	else
		return false;
}
bool Personne::operator>=(Personne const& x)
{
	if (this->dateNaissance <= x.dateNaissance)
		return true;
	else
		return false;
}
bool Personne::operator<(Personne const& x)
{
	if (this->dateNaissance > x.dateNaissance)
		return true;
	else
		return false;
}
bool Personne::operator<=(Personne const&x)
{
	if (this->dateNaissance >= x.dateNaissance)
		return true;
	else
		return false;
}
ostream& operator<<(ostream& flux, Personne &A)
{
	flux << "Personne["<<A.nom << " (" << A.dateNaissance << ")]";
	return flux;
}
