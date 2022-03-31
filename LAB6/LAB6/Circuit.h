#pragma once
#include "Car.h"
class Circuit
{
	Car**cars;
	int cars_Counter;
	int Length;
	Vreme vreme;
public:
	Circuit();
	void SetLength(int length);
	void AddCar(Car* car);
	void SetVreme(Vreme vreme);
	void Race();
	void ShowFinalRanks();
	void ShowWhoDidNotFinish();

};