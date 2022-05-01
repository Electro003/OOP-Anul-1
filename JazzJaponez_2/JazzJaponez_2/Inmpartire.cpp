#include "Inmpartire.h"

char* Inmpartire::getName()
{
    return this->name;
}

int Inmpartire::calcul(int x, int y)
{
	if (x > y)
		return x / y;
	return y / x;
}
