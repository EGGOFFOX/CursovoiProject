#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Traveler.h"
#include "dateloader.h"

std::string fileJson = "datefiles/TRAVELINF.json";
std::string fileCsv = "datefiles/POINTS.csv";


//TODO : handling exceptions
std::string parseJsonValue(std::string str, bool isValueString = false)
{
	std::string parsedValue;
	parsedValue = str.substr(str.find(":") + 2, str.size() - str.find(":"));
	parsedValue.pop_back();
	if (isValueString)
	{
		parsedValue.pop_back();
		parsedValue.erase(0, 1);
	}
	return parsedValue;
}

//TODO : handling exceptions
std::vector<int> parseCsvValues(std::string str, std::string delimiter)
{
	std::vector<int> array;
	size_t pos = 0;
	std::string value;

	while ((pos = str.find(delimiter)) != std::string::npos) {
		value = str.substr(0, pos);
		if (value != "\n") {
			array.push_back(stoi(value));
		}
		str.erase(0, pos + delimiter.length());
	}
	array.push_back(stoi(str));
	return array;
}

//TODO : handling exceptions
void parseCsvDate(std::vector<Traveler>& Travelers)
{
	//Parse structure .csv like int(travel number), int(count points),int(points x)...int(points y).

	std::vector<int> pointsX;
	std::vector<int> pointsY;
	std::vector<int> parsedValues;
	int countPoints;
	std::string line;
	Traveler traveler;

	std::ifstream in(fileCsv);
	if (in.is_open())
	{
		while (getline(in, line))
		{
			parsedValues = parseCsvValues(line, ",");
			traveler.setTravelNumber(parsedValues[0]);
			countPoints = parsedValues[1];
			for (int i = 0; i < countPoints; i++)
			{
				pointsX.push_back(parsedValues[2 + i]);
				pointsY.push_back(parsedValues[2 + countPoints + i]);
			}
			traveler.setPointArrayX(pointsX);
			traveler.setPointArrayY(pointsY);
			Travelers.push_back(traveler);
			pointsX.clear();
			pointsY.clear();
		}
	}
	else {
		std::cout << "The File not found" << std::endl;
	}
	in.close();
}

//TODO : handling exceptions
void parseJsonDate(std::vector<Traveler>& Travelers)
{
	//THIS function works with the massive received after csv parsing.

	int travelerNumber = -1;
	std::string line;

	std::ifstream in(fileJson);
	if (in.is_open()){
		while (getline(in, line))
		{
			if (line.find("travelNumber") != std::string::npos)
			{
				travelerNumber = stoi(parseJsonValue(line));
				for (int i = 0; i < Travelers.size(); i++)
				{
					if (Travelers[i].getTravelNumber() == travelerNumber)
					{
						getline(in, line);
						Travelers[i].setIntervalStops(stoi(parseJsonValue(line)));
						getline(in, line);
						Travelers[i].setStartTime(stoi(parseJsonValue(line)));
						getline(in, line);
						Travelers[i].setEndTime(stoi(parseJsonValue(line)));
						getline(in, line);
						Travelers[i].setCost(stof(parseJsonValue(line)));
						getline(in, line);
						Travelers[i].setLengthWay(stof(parseJsonValue(line)));
						getline(in, line);
						Travelers[i].setOwner(parseJsonValue(line, true));
					}
				}
			}
		}
	}
	else 
	{
		std::cout << "The File not found" << std::endl;
	}
	in.close();
}

//TODO : handling exceptions
void getTravelersDate(std::vector<Traveler>& Travelers)
{
	parseCsvDate(Travelers);
	parseJsonDate(Travelers);
}