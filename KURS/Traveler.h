#pragma once
#include <string.h>;

class Traveler
{
public:
	int count_point;
	int TravelNumber;
	int *point_arrayX;
	int *point_arrayY;
	int startTime;
	int endTime;
	int TravelTime;
	std::string INFORMATION;
	/*Traveler(int count, int *X, int *Y, int start,int end, int TimeForTravel)
	{
		count_point = count;
		point_arrayX = new int[count]; 
		point_arrayY = new int[count];
		for (int i = 0; i < count; i++)
		{
			point_arrayX[i] = X[i];
			point_arrayY[i] = Y[i];
		 
		}
	}*/
	void get(int count, int *X, int *Y, int start, int end, int TimeForTravel)
	{
		count_point = count;
		point_arrayX = new int[count];
		point_arrayY = new int[count];
		for (int i = 0; i < count; i++)
		{
			point_arrayX[i] = X[i];
			point_arrayY[i] = Y[i];

		}
	}
	~Traveler()
	{
		delete[] point_arrayX;
		delete[] point_arrayY;
	}
};