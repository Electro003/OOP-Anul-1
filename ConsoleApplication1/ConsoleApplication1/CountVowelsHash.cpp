#include "CountVowelsHash.h"

int CountVowelsHash::hash(const char* string)
{
    int rez = 0;
    for (int i = 0; i < strlen(string); i++) {
        if (strchr("AEIOUaeiou", string[i]) && (('a' <= string[i] && string[i] <= 'z') && ('A' <= string[i] && string[i] <= 'Z')))
            rez++;
    }
    return rez;
}
