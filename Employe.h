#pragma once
#include "Personne.h"
class Employe : public Personne
{
public: 
	Employe(string, string, int, float=0.0);
	Employe(const Employe&) = delete; 
	Employe& operator=(const Employe&) = delete;
	virtual void afficher() const override;
	float calculSalaire() const override;
private: 
	const int matricule; 
	float indiceSal;
	static float valAug; 
	static int comp;
};

