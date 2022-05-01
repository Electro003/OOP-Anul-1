#pragma once
#include <string.h>
#include <iostream>
using namespace std;
class Calculator
{
protected:
	Calculator* operatii;
	char* name;
	int x, y;
	int count;
public:
	Calculator();
	void setX(int x);
	void setY(int y);
	int getX();
	int getY();
	char* getName();
	Calculator& operator += (const Calculator* operatie);
	operator int();
	Calculator& operator -=(const char* operatia);
	void Compute(int x, int y);
};

