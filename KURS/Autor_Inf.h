#pragma once

#include "Abstraction.h";

class Autor : public Abstrac
{
public:
	std::string Data;
public:
	void setData();
	std::string GetData();
	virtual std::string Information();
};