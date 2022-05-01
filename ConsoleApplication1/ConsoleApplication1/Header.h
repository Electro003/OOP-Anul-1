#pragma once
#include <string.h>
class Hash
{
protected:
	char nume[2000];
public:
	virtual int hash(const char* string) = 0;
};