#pragma once
#include <iostream>
#include "Vreme.h"
using namespace std;
class Car
{
protected:
	int fuel_capacity;
	double fuel_consumption;
	int avg_speed_r;
	int avg_speed_s;
	int avg_spped_su;
public:
	virtual double getSpeed(Vreme Weather) = 0;

};