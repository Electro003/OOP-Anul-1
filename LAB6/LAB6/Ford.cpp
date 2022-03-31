#include "Ford.h"

Ford::Ford()
{
	this->avg_speed_r = 100;
	this->avg_speed_s = 95;
	this->avg_spped_su = 150;
	this->fuel_capacity = 90;
	this->fuel_consumption = 8;
}

double Ford::getSpeed(Vreme vreme)
{
	if (vreme == Vreme::Snow)
		return this->avg_speed_s;
	if (vreme == Vreme::Rainy)
		return this->avg_speed_r;
	if (vreme == Vreme::Sunny)
		return this->avg_spped_su;
}
