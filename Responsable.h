#pragma once
#include "Employe.h"
#include <vector>
class Responsable : public Employe
{
public: 
	Responsable(string n, string p, int a, float indice,string t);
	void afficher() const override; 
	void ajouterSubr(Employe &E);
	~Responsable();
	
private: 
	vector<Employe*>* sub; 
	string titre;
	//Employe** subor; // tableau dynamique 


};

