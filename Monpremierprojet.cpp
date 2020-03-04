
#include <iostream>
#include <cmath>

void afficherlhypo(double largeur, double hauteur);
void afficherlaireT(double largeur, double hauteur);
void afficherlaireR(double largeur, double hauteur);

int main()
{
	/*double hypo;*/
	double h;
	double l;
	bool finished;
	int C=0;
	
	do {

	do
	{
		std::cout << "entrez une hauteur";
		std::cin >> h;
	}while (h <= 0);

	do
	{
		std::cout << "entrez une largeur";
		std::cin >> l;
	} while (h <= 0);

	
	
	std::cout << "choisire une fonction: ";
	std::cout << std::endl << "1-calculer l'hypothenuse";
	std::cout << std::endl << "2-calculer l'aire d'un triangle";
	std::cout << std::endl << "3-calculer l'aire d'un rectangle";
	std::cout << std::endl << "9-EXIT";
	std::cout << std::endl << "";
	
	std::cin >> C;
	
	switch (C) {
	case 1 :
		afficherlhypo(l, h);
		break;
	case 2 :
		afficherlaireT(l, h);
		break;
	case 3 :
		afficherlaireR(l, h);
		break;
	case 9 :
		std::cout << "Au revoir !" << std::endl;
		break;
	default:
		std::cout << "Choix invalide !" << std::endl;
	};

	} while ( C != 3);

		
		
	//hypo = sqrt(pow(h,2)+pow(l,2));
	//std::cout << "l'hypothenuse est : " << hypo;


	//int a, b, c;
	//std::cin >> a;
	//std::cin >> b;
	//std::cin >> c;
	//if ((a < b) && (a < c)) std::cout << "a plus petit que b et c";
	//else if ((a < b) || (a < c)) std::cout << "a plus petit que b ou c";
	//else if (!(a < b) && !(a < c)) std::cout << "a plus grand que b et c";
}


void afficherlhypo(double largeur, double hauteur) {
	double hypo=0;
	hypo = sqrt(pow(hauteur, 2) + pow(largeur, 2));
	std::cout << "l'hypothenuse est : " << hypo;
	/*return hypo;*/

}

void afficherlaireT(double largeur, double hauteur) {
	double aire = 0;
	aire = (hauteur*largeur)/2;
	std::cout << "l'aire du triangle est : " << aire;
	/*return aire;*/
}

void afficherlaireR(double largeur, double hauteur) {
	double aire = 0;
	aire = hauteur*largeur;
	std::cout << "l'aire du rectangle est : " << aire;
	///*return aire;*/
}
