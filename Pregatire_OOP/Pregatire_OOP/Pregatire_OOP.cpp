// Pregatire_OOP.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Catalog.h"
#include <iostream>
int main()
{
	
	Catalog c;
	c += {"Andrei"}; // Se adauga studentul cu numele "Andrei" in catalog
	c += {"Roxana"}; // Se adauga studenta cu numele "Roxana" in catalog
	c += {"Sorin"}; // Se adauga studentul cu numele "Sorin" in catalog
	c["Andrei"]["matematica"] = 8;
	c["Andrei"]["romana"] = 7;
	c["Andrei"]["franceza"] = 6;
	c["Roxana"]["matematica"] = 9;
	c["Roxana"]["romana"] = 10;
	c["Sorin"]["sport"] = 5;
	c["Sorin"]["romana"] = 9;
	std::cout << "Total studenti: " << c.getCount() << std::endl;
	for (int index = 0; index < c.getCount(); index++)
	{
		std::cout << "Nume: " << c[index].getNume() << std::endl;
		std::cout << "Media: " << (float)c[index].getMedie() << std::endl;
		c[index].printNote();
	}
	return 1;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
