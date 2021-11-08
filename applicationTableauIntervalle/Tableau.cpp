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
    //this->tab = new float[taille]();//initialisation en meme temps par 0
    // 
    // initialisation des cases par 0
    if(this->tab)//on test si l'allocation est bien fait
        for (unsigned int i = 0; i < taille; i++)
            this->tab[i] = 0;
}

Tab::Tableau::Tableau(const Tableau& T)
{
    this->taille = T.taille;
    /*
    * le this->tab est tjr inexistant car en'est entrain de la créer
    if (this->tab) // si le tab existe
        delete this->tab;
    */
    this->tab = new float[T.taille];

    if(this->tab)//on test si l'allocation est bien fait
        for (int i = 0; i < T.taille; i++)
            this->tab[i] = T.tab[i];

}

Tableau& Tab::Tableau::operator=(const Tableau& T)
{
    if (this != &T)//tester si on a l'auto affectation cad si le this != de T
    {
        //on a deux objet différent
        this->taille = T.taille;
        if (this->tab)// si le tab existe
        {
            delete[] this->tab;
            this->tab = 0;
        }
            
        this->tab = new float[this->taille];
        if(this->tab)
            for (int i = 0; i < this->taille; i++)
                this->tab[i] = T.tab[i];
    }
    return *this;
}
/*
avec cette version la modifaction est autorisé tant qu'on utilise 
l'operateur de la closse double 
si on fait const dals le type de retour : le odification n'est pas autorisé!!
*/
float& Tab::Tableau::operator[](unsigned int indice)const
{
    assert( (indice >= 0) && (indice < this->taille));
    //this->tab[indice] = 0;// l'appel a l'operateur de la classe double qui autorise la modfication 
    //this->taille = 0;
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
