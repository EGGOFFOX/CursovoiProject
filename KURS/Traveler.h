#pragma once

class Traveler
{
public:
	int count_point;
	int point_arrayX;
	int point_arrayY;
	Traveler(int count, int X, int Y)
	{
		count_point = count;
		int *point_arrayX = new int[count]; 
		int *point_arrayY = new int[count];
		for (int i = 0; i < count; i++)
		{
			point_arrayX[i] = X;
			point_arrayY[i] = Y;

		}
	}
};