#pragma once
#include "Tableau.h"
using namespace Tab;
class TableauBorne :
    public Tableau
{
private:
    float BorneInf;
    float BorneSup;
public:
    TableauBorne(int, float, float);
    void print()const;
    float operator[](unsigned int)const;
    void remplirTab();
};

