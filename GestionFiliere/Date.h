#pragma once
class Date
{
	int jour;
	int mois;
	int annee;

public:
// Forme canonique d'une classe : 1--->4
// 1- constructeur(s)
		Date();
		Date(int, int, int);
// 2- Constructeur de copie
		Date(Date const&);
// 3- Destructeur : un seul pas plus
		public: ~Date();
// 4- Opérateur affectation =
		Date& operator=(Date const&);
// 5- opérateur << de redirection de flux
		friend ostream& operator<<(ostream& flux, Date &x);
		void afficher();
// 6- Les setters et getters
		void setJour(int);
		void setMois(int);
		void setAnnee(int);
		int getJour();
		int getMois();
		int getAnnee();
// 7- les opérateurs
		bool operator==(Date const& );
		bool operator!=(Date const&);
		bool operator>(Date const&);
		bool operator>=(Date const&);
		bool operator<(Date const&);
		bool operator<=(Date const&);
};



