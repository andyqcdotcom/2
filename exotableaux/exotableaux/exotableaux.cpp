
#include <iostream>



int main()
{
	int entier[5] ;
	int max;
	int min;

	for (int i = 0; i < 5; i++) {
		std::cout << "entrer un entier ";
		std::cin >> entier[i];
	}
	
	max = entier[0];
	min = entier[0];
	
	for (int i = 1; i < 5; i++){
		if (entier[i] < min)
			min = entier[i];
		if (entier[i] > max)
			max = entier[i];
	}
	
	std::cout << "la plus grande valeur est: " << max;
	std::cout << "\n";
	std::cout << "la plus petite valeur est: " << min;
	std::cout << "\n";

}


