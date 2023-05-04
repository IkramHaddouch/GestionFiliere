#include "Header.h"

ostream& operator<<(ostream& flux, Date &x)
{
	flux << x.getJour() << "/" << x.mois << "/" << x.annee;
	return flux;
}
Date::Date()
{
	this->jour = 1;
	this->mois = 1;
	this->annee = 2000;
}
Date::Date(int jour, int mois, int annee)
{
	this->jour = jour;
	this->mois = mois;
	this->annee = annee;
}
Date::Date(Date const&A)
{
	//cout << "contructeur de copie appelé!" << endl;
	this->jour = A.jour;
	this->mois = A.mois;
	this->annee = A.annee;
}
Date::~Date()
{
	//cout << "destructeur applelé !" << endl;
}
void Date::setJour(int jour)
{
	(*this).jour = jour;
}
void Date::setMois(int mois)
{
	this->mois = mois;
}
void Date::setAnnee(int a)
{
	annee = a;
}
int Date::getJour()
{
	return this->jour;
}
int Date::getMois()
{
	return this->mois;
}
int Date::getAnnee()
{
	return this->annee;
}
void Date::afficher()
{
	cout << jour << "/" << mois << "/" << annee;
}
bool Date::operator==(Date const &a)
{
	Date c;
	if (this->jour == a.jour && mois == a.mois && annee == a.annee)
		return true;
	else return 
		false;
}
bool Date::operator!=(Date const& A)
{
	if ((*this) == A)
		return false;
	else
		return true;
}
bool Date::operator>(Date const& A)
{
	if (this->annee > A.annee)
		return true;
	else if (this->annee < A.annee)
		return false;
	else {
			if (this->mois > A.mois)
				return true;
			else if (this->mois < A.mois)
				return false;
			else {
					if (this->jour > A.jour) 
						return true;
					else 
						return false;
			     }
		 }
}
bool Date::operator>=(Date const& A)
{
	if ((*this) == A || (*this) > A)
		return true;
	else
		return false;
}
bool Date::operator<(Date const& A)
{
	
	if ((*this) >= A)
		return false;
	else
		return true;
}
bool Date::operator<=(Date const& A)
{
	if ((*this) > A)
		return false;
	else return 
		true;
}

Date& Date::operator=(Date const& A)
{
	this->jour = A.jour;
	this->mois = A.mois;
	this->annee = A.annee;
	return *this;
}
