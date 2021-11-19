#include "Employe.h"
int Employe::comp = 0;
float Employe::valAug = 20;
Employe::Employe(string n, string p, int a, float indice)
    :Personne(n,p,a),matricule(++comp)
{
    this->indiceSal = indice;
}

void Employe::afficher() const
{
    this->Personne::afficher();
    cout << "indice :" << this->indiceSal << endl;
    cout << "matricule :" << this->matricule<< endl;
}

float Employe::calculSalaire() const
{
    float s = this->indiceSal * (1 + Employe::valAug/100);
    return s;
}
