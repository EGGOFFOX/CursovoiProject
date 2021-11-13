#include <iostream>
#include <fstream>
#include <string>
#include "Traveler.h"
#include "dateloader.h"

std::string fileJson = "datefiles/TRAVELINF.json";
std::string fileCsv = "datefiles/POINTS.csv";

//TODO : handling exceptions
std::string parseJsonLine(std::string str, bool isValueString = false)
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
int* parseCsvLine(std::string str, std::string delimiter)
{
	//Parse int values.
	//Return: int massive.

	int* array = new int[0];
	int* oldArray;
	int countCells = 0;

	size_t pos = 0;
	std::string value;
	while ((pos = str.find(delimiter)) != std::string::npos) {
		value = str.substr(0, pos);
		if (value != "\n") {
			oldArray = array;
			array = new int[countCells + 1];
			for (int i = 0; i < countCells; i++)
				array[i] = oldArray[i];
			array[countCells] = stoi(value);
			countCells++;
			delete[] oldArray;
		}
		str.erase(0, pos + delimiter.length());
	}
	oldArray = array;
	array = new int[countCells + 1];
	for (int i = 0; i < countCells; i++)
		array[i] = oldArray[i];
	array[countCells] = stoi(str);
	delete[] oldArray;
	return array;
}

//TODO : handling exceptions
void parseCsvDate(Traveler* Paths)
{
	//Parse structure .csv like int(travel number), int(count points),int(points x)...int(points y).
	//2 + i because of structure.

	int countParsedPaths = 0;
	int* pointsX;
	int* pointsY;
	int countPoints;

	std::ifstream in(fileCsv);
	if (in.is_open())
	{
		std::string line;
		while (getline(in, line))
		{
			int* parsedCellsValues = parseCsvLine(line, ",");
			Paths[countParsedPaths].setTravelNumber(parsedCellsValues[0]);

			countPoints = parsedCellsValues[1];
			pointsX = new int[countPoints];
			pointsY = new int[countPoints];
			for (int i = 0; i < countPoints; i++)
			{
				pointsX[i] = parsedCellsValues[2 + i];
				pointsY[i] = parsedCellsValues[2 + countPoints + i];
			}
			Paths[countParsedPaths].setPointArrayX(pointsX, countPoints);
			Paths[countParsedPaths].setPointArrayY(pointsY, countPoints);
			countParsedPaths++;

			delete[] parsedCellsValues;
		}
	}
	else {
		std::cout << "The File not found" << std::endl;
	}
	in.close();
}

//TODO : handling exceptions
void parseJsonDate(Traveler* Paths, int amountPaths)
{
	//THIS function works with the massive received after csv parsing.

	int travelerNumber = -1;

	std::ifstream in(fileJson);
	std::string line;
	while (getline(in, line))
	{
		if (line.find("travelNumber") != std::string::npos)
		{
			travelerNumber = stoi(parseJsonLine(line));
			for (int i = 0; i < amountPaths; i++)
			{
				if (Paths[i].getTravelNumber() == travelerNumber)
				{
					getline(in, line);
					Paths[i].setTravelTime(stoi(parseJsonLine(line)));
					getline(in, line);
					Paths[i].setStartTime(stoi(parseJsonLine(line)));
					getline(in, line);
					Paths[i].setEndTime(stoi(parseJsonLine(line)));
					getline(in, line);
					Paths[i].setCost(stof(parseJsonLine(line)));
					getline(in, line);
					Paths[i].setLengthWay(stof(parseJsonLine(line)));
					getline(in, line);
					Paths[i].setOwner(parseJsonLine(line, true));
				}
			}
		}
	}
	in.close();
}

void getTravelersDate(Traveler* Travelers, int amountTravelers)
{
	parseCsvDate(Travelers);
	parseJsonDate(Travelers, amountTravelers);
}