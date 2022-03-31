#include "Circuit.h"

Circuit::Circuit()
{
	this->cars = new Car*[10];
	this->cars_Counter = 0;
	this->Length = 0;
	this->vreme = Vreme::Sunny;
}

void Circuit::SetVreme(Vreme vreme)
{
	this->vreme = vreme;
}

void Circuit::Race()
{
	for (int i = 0; i < this->cars_Counter; i++)
	{

	}
}

void Circuit::SetLength(int length)
{
	this->Length = length;
}

void Circuit::AddCar(Car* car)
{
	
		this->cars[this->cars_Counter] = car;
		this->cars_Counter++;
}

