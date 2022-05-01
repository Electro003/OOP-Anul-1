#pragma once
#include "Oper.h"
class Scadere: public Oper
{
public:
	char* getName();
	int calcul(int x, int y);
};

