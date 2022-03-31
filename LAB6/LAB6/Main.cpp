// LAB6.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "Circuit.h"
#include "Dacia.h"
#include "Toyota.h"
#include "Mercedes.h"
#include "Ford.h"
#include "Mazda.h"

int main()
{
	Circuit c;

	c.SetLength(100);

	c.SetVreme(Vreme::Rainy);

	c.AddCar(new Dacia());

	c.AddCar(new Toyota());

	c.AddCar(new Mercedes());

	c.AddCar(new Ford());

	c.AddCar(new Mazda());

	c.Race();

	//c.ShowFinalRanks(); // it will print the time each car needed to finish the circuit sorted from the fastest car to the   slowest.

	//c.ShowWhoDidNotFinish(); // it is possible that some cars don't have enough fuel to finish the circuit

	return 0;
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
