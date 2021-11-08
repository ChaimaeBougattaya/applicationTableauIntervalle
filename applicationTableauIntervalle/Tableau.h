#pragma once
namespace Tab {
	class Tableau
	{
	private:
		float* tab;
		int taille;
	public:
		Tableau(unsigned int);
		Tableau(const Tableau&);
		Tableau& operator=(const Tableau&);
		void remplir();
		void print()const;
		~Tableau();
		float& operator[](unsigned int)const;
		//Si on met const ou non aucun changement parce qu'on return un réference
	};
}
