#include "EasyHash.h"

int EasyHash::hash(const char* string)
{
    int rez = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (strchr("AEIOUaeiou", string[i]))
            rez += string[i] * 10;
        else if (!strchr("AEIOUaeiou", string[i]) && (('a' <= string[i] && string[i] <= 'z') && ('A' <= string[i] && string[i] <= 'Z')))
            rez += string[i] * 11;
        else
            rez += string[i] * 12;
    }
    return rez;
}
