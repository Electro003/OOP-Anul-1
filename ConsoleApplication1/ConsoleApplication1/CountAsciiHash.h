#pragma once
#include "Header.h"
class CountAsciiHash:public Hash
{
public:
	int hash(const char* string) override;
};

