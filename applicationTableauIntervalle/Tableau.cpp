#include "Tableau.h"
#include<iostream>
#include<assert.h>
using namespace std;
using namespace Tab;
Tab::Tableau::Tableau(unsigned int taille)
{
    assert(taille > 0);
    //l'affectation et l'allocation dynamique 
    this->taille = taille;
    this->tab = new float[taille];

    // initialisation des cases par 0
    for (unsigned int i = 0; i < taille; i++)
        this->tab[i] = 0;
}

Tab::Tableau::Tableau(const Tableau& T)
{
    this->taille = T.taille;
    if (this->tab) // si le tab existe
        delete this->tab;

    this->tab = new float[T.taille];

    for (int i = 0; i < T.taille; i++)
        this->tab[i] = T.tab[i];

}

Tableau& Tab::Tableau::operator=(const Tableau& T)
{
    if (this != &T)
    {
        this->taille = T.taille;
        if (this->tab)// si le tab existe
            delete this->tab;
        this->tab = new float[this->taille];
        for (int i = 0; i < this->taille; i++)
            this->tab[i] = T.tab[i];
    }
    return *this;
}

float& Tab::Tableau::operator[](unsigned int indice)
{
    assert(indice >= 0);
    return this->tab[indice];
}

void Tab::Tableau::remplir()
{
    for (int i = 0; i < this->taille; i++)
    {
        cout << "\ndonner un nombre réel : ";
        cin >> this->tab[i];
    }
}

void Tab::Tableau::print() const
{
    for (int i = 0; i < this->taille; i++)
        cout << "Tab[" << i << "] = " << this->tab[i] << endl;
}

Tab::Tableau::~Tableau()
{
    if (this->tab)
    {
        delete this->tab;
        this->tab = nullptr;
    }
        
}
