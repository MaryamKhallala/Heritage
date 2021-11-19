#include "Responsable.h"

Responsable::Responsable(string n, string p, int a, float indice, string t)
	: Employe(n, p, a, indice)
{

	this->titre = t;
	this->sub = new  vector<Employe*>();
}

void Responsable::afficher() const
{
	this->Employe::afficher();
	cout << "titre :" << this->titre << endl;

	for (int i = 0; i < this->sub->size(); i++)
	{
		(*this->sub)[i]->afficher(); // polymorphisme
		//this->sub->operator[](i)->afficher();
	}
}

void Responsable::ajouterSubr(Employe& E)
{
	if (this != &E) {
		this->sub->push_back(&E);
	}
}

Responsable::~Responsable()
{
	delete this->sub; // vector
	this->sub = 0;
}


