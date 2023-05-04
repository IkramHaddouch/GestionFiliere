#pragma once
class Etudiant : public Personne
{
	string filiere;
	int niveau;
protected:static int id;
		 int matricule;
public : 
	Etudiant();
	Etudiant(string, Date, string, int);
	Etudiant(string, int, int, int, string, int);
	~Etudiant();
	Etudiant(Etudiant const&);
	Etudiant& operator=(Etudiant const&);
	friend ostream& operator<<(ostream& , Etudiant &);
};

