#include "Toyota.h"

Toyota::Toyota()
{
	this->avg_speed_r = 135;
	this->avg_speed_s = 120;
	this->avg_spped_su = 156;
	this->fuel_capacity = 90;
	this->fuel_consumption = 6.3;
}

double Toyota::getSpeed(Vreme vreme)
{
	if (vreme == Vreme::Snow)
		return this->avg_speed_s;
	if (vreme == Vreme::Rainy)
		return this->avg_speed_r;
	if (vreme == Vreme::Sunny)
		return this->avg_spped_su;
}
