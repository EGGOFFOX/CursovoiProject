#pragma once
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Traveler.h"
class DataLoader
{
public:

	void getTravelersData(std::vector<Traveler>& Travelers);
	

	std::string parseJsonValue(std::string str, bool isValueString);

	std::vector<int> parseCsvValues(std::string str, std::string delimiter);

	void parseCsvData(std::vector<Traveler>& Travelers);

	void parseJsonData(std::vector<Traveler>& Travelers);

};