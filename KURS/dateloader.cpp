#include <iostream>
#include <fstream>
#include <string>
#include "Traveler.h"
#include "dateloader.h"

std::string parse_JSONline(std::string str, bool isValueString = false)
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
int* parse_CSVline(std::string str, std::string delimiter)
{
	//Parse int values.
	//Return: int dynamic massive.

	int* array = new int[0];
	int* oldarray;
	int countCells = 0;


	size_t pos = 0;
	std::string value;
	while ((pos = str.find(delimiter)) != std::string::npos) {
		value = str.substr(0, pos);
		if (value != "\n") {
			oldarray = array;
			array = new int[countCells + 1];
			for (int i = 0; i < countCells; i++)
				array[i] = oldarray[i];
			array[countCells] = stoi(value);
			countCells++;
			delete[] oldarray;
		}
		str.erase(0, pos + delimiter.length());
	}
	oldarray = array;
	array = new int[countCells + 1];
	for (int i = 0; i < countCells; i++)
		array[i] = oldarray[i];
	array[countCells] = stoi(str);
	delete[] oldarray;

	return array;
}

//TODO : handling exceptions
void parse_CSVdate(Traveler* paths)
{
	//Parse structure .csv like int(travel number), int(count points),int(points x)...int(points y).
	//parsed_cells_values[1] is amount of the points.

	int countPaths = 0;
	int* pointsX;
	int* pointsY;
	std::ifstream in("datefiles/POINTS.csv");
	if (in.is_open())
	{
		std::string line;
		while (getline(in, line))
		{
			int* parsed_cells_values = parse_CSVline(line, ",");
			paths[countPaths].set_TravelNumber(parsed_cells_values[0]);
			paths[countPaths].set_count_points(parsed_cells_values[1]);

			pointsX = new int[parsed_cells_values[1]];
			pointsY = new int[parsed_cells_values[1]];
			for (int i = 0, currentPositionPoint = 0; i < parsed_cells_values[1]; i++, currentPositionPoint++)
			{
				pointsX[currentPositionPoint] = parsed_cells_values[2 + i];
				pointsY[currentPositionPoint] = parsed_cells_values[2 + parsed_cells_values[1] + i];
			}
			paths[countPaths].set_point_arrayX(pointsX);
			paths[countPaths].set_point_arrayY(pointsY);
			countPaths++;

			delete[] parsed_cells_values;
		}
	}
	else {
		std::cout << "The File not found" << std::endl;
	}
	in.close();
}

//TODO : handling exceptions
void parse_JSONdate(Traveler* paths, int amountPaths)
{
	//THIS function works with the massive received after csv parsing.

	int Travelernumber = -1;

	std::ifstream in("datefiles/TRAVELINF.json");
	std::string line;
	while (getline(in, line))
	{
		if (line.find("NUMBER") != std::string::npos)
		{
			Travelernumber = stoi(parse_JSONline(line));
			for (int i = 0; i < amountPaths; i++)
			{
				if (paths[i].get_TravelNumber() == Travelernumber)
				{
					getline(in, line);
					paths[i].set_TravelTime(stoi(parse_JSONline(line)));
					getline(in, line);
					paths[i].set_startTime(stoi(parse_JSONline(line)));
					getline(in, line);
					paths[i].set_endTime(stoi(parse_JSONline(line)));
					getline(in, line);
					paths[i].set_cost(parse_JSONline(line, true));
					getline(in, line);
					paths[i].set_lengthWay(parse_JSONline(line, true));
					getline(in, line);
					paths[i].set_owner(parse_JSONline(line, true));
				}
			}
		}
	}
	in.close();
}

void get_Travelers_date(Traveler* travelers, int amountTravelers)
{
	parse_CSVdate(travelers);
	parse_JSONdate(travelers, amountTravelers);
}