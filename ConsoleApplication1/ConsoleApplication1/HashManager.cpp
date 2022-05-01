#define _CRT_SECURE_NO_WARNINGS
#include "HashManager.h"
#include <stdio.h>

HashManager::HashManager()
{
	this->count = 0;
}

Hash*& HashManager::operator[](const char* string)
{
	strcpy(this->list[count].name, string);
	this->count++;
	return this->list[count - 1].hash;
}
void HashManager::print_hashes()
{
	for (int i = 0; i < count; i++)
	{
		printf("%s = %d\n", this->list[i].name,this->list[i].hash->hash(this->list[i].name));
	}
}
