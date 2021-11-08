#pragma once
#include "Tableau.h"
using namespace Tab;
class TableauBorne :
    private Tableau
{
private:
    float BorneInf;
    float BorneSup;
public:
    TableauBorne(int, float, float);
    TableauBorne(const TableauBorne&);
    void print()const;
    //float operator[](unsigned int)const;
    const float& operator[](unsigned int)const; // autre méthode!!
    void operator()(int, float);
    TableauBorne& operator=(const TableauBorne&);
    ~TableauBorne();
    //void remplirTab();
};

