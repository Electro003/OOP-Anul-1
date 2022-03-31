#include "Mercedes.h"

Mercedes::Mercedes()
{
	this->avg_speed_r = 120;
	this->avg_speed_s = 118;
	this->avg_spped_su = 200;
	this->fuel_capacity = 60;
	this->fuel_consumption = 7.5;
}

double Mercedes::getSpeed(Vreme vreme)
{
	if (vreme == Vreme::Snow)
		return this->avg_speed_s;
	if (vreme == Vreme::Rainy)
		return this->avg_speed_r;
	if (vreme == Vreme::Sunny)
		return this->avg_spped_su;
}
