#pragma once
class Personne
{
	
	string nom;
	Date dateNaissance;
//protected:static int id;
//		 int matricule;
public :
	// 1- Constructeur(s)
	Personne();
	Personne(string, Date);
	Personne(string, int, int, int);
	// 2- Constructeur de copie
	Personne(Personne const&);
	// 3- destructeur
	~Personne();
	// 4- operateur affectation =
	Personne& operator=(Personne const&);
	// 5- operateur <<
	friend ostream& operator<<(ostream&, Personne &);
	// 6- setters et getters
	void setNom(string);
	void setDateNaissance(Date);
	void setDateNaissance(int, int, int);
	string getNom();
	Date getDateNaissiance();
	// les operateurs de comparaison se basant sur l'age
	bool operator==(Personne const&);
	bool operator!=(Personne const&);
	bool operator>(Personne const&);
	bool operator>=(Personne const&);
	bool operator<(Personne const&);
	bool operator<=(Personne const&);
};

