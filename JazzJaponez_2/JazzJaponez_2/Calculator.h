#pragma once
#include "Oper.h"
#include <cstring>
class Calculator
{
	Oper* adunari[10];  // 0
	int count; // 1

public:
	Calculator();
	Calculator& operator +=(Oper* operatie);
	Calculator& operator -=(const char * operatie);
	operator int();
	int Compute(int x, int y);


};

