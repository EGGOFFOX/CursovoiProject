#pragma once

#include "Abstraction.h";

class DataString : public Abstrac
{
private:
	std::string Data;
public:
	void setData();
	std::string GetData();
	virtual std::string Information();
};