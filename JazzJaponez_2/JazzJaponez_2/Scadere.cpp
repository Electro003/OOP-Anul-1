#include "Scadere.h"

char* Scadere::getName()
{
    return this->name;
}

int Scadere::calcul(int x, int y)
{
    if (x > y)
        return x - y;
    return y - x;
}
