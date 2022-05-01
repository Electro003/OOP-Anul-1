#pragma once
#include "Header.h"
struct hash_pair {
	char name[20];
	Hash* hash;
};
class HashManager
{	
	hash_pair list[20];
	int count;
public:
	HashManager();
	Hash*& operator [](const char*);
	void print_hashes();
};


