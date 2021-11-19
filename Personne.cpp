#include "Personne.h"
#include <iostream>
using namespace std;
Personne::Personne(string n, string p, int a)
{
	this->nom = n;
	this->prenom = p;
	this->age = a;
	
}

Personne::~Personne()
{
}

void Personne::afficher(void) const
{
	cout << "nom :" << this->nom << endl;
	cout << "prenom :" << this->prenom << endl;
	cout << "age :" << this->age << endl;
}
