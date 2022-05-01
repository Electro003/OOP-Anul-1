#include "Phrase.h"

Phrase::Phrase(const char* string)
{
	this->count = 0;
	for (int i = 0; i < strlen(string); i++)
	{
		if (string[i] == ' ')
			this->count++;
	}
	this->cuvinte = new char* [this->count];
	char* newstring = new char [strlen(string)+1];
	strcpy(newstring, string);
	char* p;
	int count_2 = 0;
	p = strtok(newstring, " ");
	while (p && count_2<this->count)
	{
		this->cuvinte[count_2] = p;
		count_2++;
		p = strtok(nullptr, " ");
	}
	
}

Phrase::~Phrase()
{
	delete[] cuvinte;
}

Phrase::operator int()
{
	return this->count;
}
char*& Phrase::operator[](int index)
{
	return this->cuvinte[index];
}

int Phrase::CountLetter(int index, char x)
{
	int rez = 0;
	char* cuvant = this->cuvinte[index];
	for (int i = 0; i < strlen(cuvant); i++)
	{
		if (cuvant[i] == x)
			rez++;
	}
	return rez;
}

int Phrase::CountLetter(char x)
{
	int rez = 0;
	for (int i = 0; i < this->count; i++)
	{
		for (int j = 0; j < strlen(this->cuvinte[i]); j++)
		{
			if (this->cuvinte[i][j] == 'x')
				rez++;
		}
	}
	return rez;
}

int Phrase::CountVowels()
{
	int rez=0;
	for (int i = 0; i < this->count; i++)
	{
		for (int j = 0; j < strlen(this->cuvinte[i]); j++)
		{
			if (strchr("AEIOUaeiou", this->cuvinte[i][j]))
				rez++;
		}
	}
	return rez;
}

char* Phrase::GetLongestWord()
{
	int max = strlen(this->cuvinte[0]);
	char* p = this->cuvinte[0];
	for (int i = 1; i < this->count; i++)
	{
		if (strlen(this->cuvinte[i]) > max)
		{
			max = strlen(this->cuvinte[i]);
			p = this->cuvinte[i];
		}
	}
	return p;
}

