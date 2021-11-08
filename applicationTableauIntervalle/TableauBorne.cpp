#include "TableauBorne.h"
#include "Tableau.h"
#include<iostream>
#include<assert.h>
using namespace std;

TableauBorne::TableauBorne(int taille, float BI, float BS):Tableau(taille)
{
	assert(BI < BS);
	this->BorneInf = BI;
	this->BorneSup = BS;
}

TableauBorne::TableauBorne(const TableauBorne& T):Tableau(T)
{
	this->BorneInf = T.BorneInf;
	this->BorneSup = T.BorneSup;
}

void TableauBorne::print() const
{
	cout << "Borne inf = " << this->BorneInf << " , Borne sup = " << this->BorneSup << endl;
	this->Tableau::print();
}

const float& TableauBorne::operator[](unsigned int indice)const
{
//	assert(indice >= 0 && );
	//this->tab[0]=5.8;
	//this->taille = 6;
	//return this->tab[indice];
	return this->Tableau::operator[](indice);
}

void TableauBorne::operator()(int indice, float val)
{
	assert(val >= this->BorneInf && val <= this->BorneSup);
	//this->tab[indice] = val;
	this->Tableau::operator[](indice) = val;
}

TableauBorne& TableauBorne::operator=(const TableauBorne&T)
{
	if (this != &T)
	{
		this->Tableau::operator=(T);
		this->BorneInf = T.BorneInf;
		this->BorneSup = T.BorneSup;
	}
	return *this;
}

TableauBorne::~TableauBorne()
{
	//déstructeur
}

/*void TableauBorne::remplirTab()
{
	float val;
	for (int i = 0; i < this->taille; i++)
	{
		do {
			cout << "\nEntrer un reel compris entre "<<this->BorneInf<<" et "<<this->BorneSup<<endl;
			cout<< "T[" << i << "]= "; cin >> val;
		} while ((val < this->BorneInf) || (val > this->BorneSup));
		this->Tableau::operator[](i) = val;
	}
}
*/