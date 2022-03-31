#include "Mazda.h"

Mazda::Mazda()
{
	this->avg_speed_r = 105;
	this->avg_speed_s = 100;
	this->avg_spped_su = 180;
	this->fuel_capacity = 50;
	this->fuel_consumption = 7;
}

double Mazda::getSpeed(Vreme vreme)
{
	if (vreme == Vreme::Snow)
		return this->avg_speed_s;
	if (vreme == Vreme::Rainy)
		return this->avg_speed_r;
	if (vreme == Vreme::Sunny)
		return this->avg_spped_su;
}
