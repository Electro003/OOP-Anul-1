#include "CountAsciiHash.h"

int CountAsciiHash::hash(const char* string)
{
    int rez = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        rez += string[i];
    }
    return rez;
}
