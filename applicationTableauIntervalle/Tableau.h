#pragma once
namespace Tab {
	class Tableau
	{
	protected:
		float* tab;
		int taille;
	public:
		Tableau(unsigned int);
		Tableau(const Tableau&);
		Tableau& operator=(const Tableau&);
		void remplir();
		void print()const;
		~Tableau();
	private:
		float& operator[](unsigned int);
	};

}
