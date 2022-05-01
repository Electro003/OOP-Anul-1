#pragma once
#include <cstring>
class Phrase
{
	char** cuvinte;
	int count;
public:
	Phrase(const char *string);
	~Phrase();
	operator int();
	char*& operator[] (int index);
	int CountLetter(int index, char x);
	int CountLetter(char x);
	int CountVowels();
	char* GetLongestWord();
};

