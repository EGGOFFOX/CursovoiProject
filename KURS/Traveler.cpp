#include <string>
#include <iostream>
#include "Traveler.h"

	//TODO:Validate set-get date
	void Traveler::set_count_points(int count) { count_points = count; }
	void Traveler::set_TravelNumber(int number) { TravelNumber = number; }
	void Traveler::set_point_arrayX(int* point_array) { point_arrayX = point_array; }
	void Traveler::set_point_arrayY(int* point_array) { point_arrayY = point_array; }
	void Traveler::set_TravelTime(int time) { TravelTime = time; }
	void Traveler::set_startTime(int time) { startTime = time; }
	void Traveler::set_endTime(int time) { endTime = time; }
	void Traveler::set_cost(std::string str) { cost = str; }
	void Traveler::set_lengthWay(std::string str) { lengthWay = str; }
	void Traveler::set_owner(std::string str) { owner = str; }
	int Traveler::get_count_points() { return count_points; }
	int Traveler::get_TravelNumber() { return TravelNumber; }
	void Traveler::get_point_arrayX()
	{
		for (int i = 0; i < count_points; i++)
			std::cout << point_arrayX[i] << std::endl;
	}
	void Traveler::get_point_arrayY()
	{
		for (int i = 0; i < count_points; i++)
			std::cout << point_arrayY[i] << std::endl;
	}
	int Traveler::get_TravelTime() { return TravelTime; }
	int Traveler::get_endTime() { return endTime; }
	int Traveler::get_startTime() { return startTime; }
	std::string Traveler::get_cost() { return cost; }
	std::string Traveler::get_lengthWay() { return lengthWay; }
	std::string Traveler::get_owner() { return owner; }
	Traveler::Traveler()
	{
		startTime = 0;
		endTime = 0;
		TravelNumber = -1;
		count_points = 0;
		TravelTime = 0;
		point_arrayX = new int[0];
		point_arrayY = new int[0];
	}
	//Traveler(int count, int *X, int *Y, int start, int end, int TimeForTravel)
	//{
	//	count_point = count;
	//	for (int i = 0; i < count; i++)
	//	{
	//		point_arrayX[i] = X[i];
	//		point_arrayY[i] = Y[i];

	//	}
	//}
	Traveler::~Traveler()
	{
		delete[] point_arrayX;
		delete[] point_arrayY;
	}