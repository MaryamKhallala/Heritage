#pragma once
#include<iostream>
using namespace std;
class Personne // classe abstraite
{
public: 
	Personne(string, string, int); 
	~Personne();
	virtual void afficher(void) const;
	virtual float calculSalaire() const =0; // virtual pure==> abstraite

private: 
	string nom; 
	string prenom;
	int age;

};

