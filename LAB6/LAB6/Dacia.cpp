#include "Dacia.h"
Dacia::Dacia()
{
	this->avg_speed_r = 85;
	this->avg_speed_s = 81;
	this->avg_spped_su = 120;
	this->fuel_capacity = 86;
	this->fuel_consumption = 6.5;
}

double Dacia::getSpeed(Vreme vreme)
{
	if (vreme == Vreme::Snow)
		return this->avg_speed_s;
	if (vreme == Vreme::Rainy)
		return this->avg_speed_r;
	if (vreme == Vreme::Sunny)
		return this->avg_spped_su;
}
