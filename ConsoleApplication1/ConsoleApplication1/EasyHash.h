#pragma once
#include "Header.h"
class EasyHash : public Hash
{
public:
	int hash(const char* string) override;
};

