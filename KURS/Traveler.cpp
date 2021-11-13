#include <string>
#include <iostream>
#include "Traveler.h"

	//TODO:Validate set-get date
	void Traveler::setCountPoints(int count) { countPoints_ = count; }
	void Traveler::setTravelNumber(int number) { travelNumber_ = number; }
	void Traveler::setPointArrayX(int* pointArray) { pointArrayX_ = pointArray; }
	void Traveler::setPointArrayY(int* pointArray) { pointArrayY_ = pointArray; }
	void Traveler::setTravelTime(int time) { travelTime_ = time; }
	void Traveler::setStartTime(int time) { startTime_ = time; }
	void Traveler::setEndTime(int time) { endTime_ = time; }
	void Traveler::setCost(std::string str) { cost_ = str; }
	void Traveler::setLengthWay(std::string str) { lengthWay_ = str; }
	void Traveler::setOwner(std::string str) { owner_ = str; }
	int Traveler::getCountPoints() { return countPoints_; }
	int Traveler::getTravelNumber() { return travelNumber_; }
	void Traveler::getPointArrayX()
	{
	/*	for (int i = 0; i < count_points; i++)
			std::cout << point_arrayX[i] << std::endl;*/
	}
	void Traveler::getPointArrayY()
	{
		/*for (int i = 0; i < count_points; i++)
			std::cout << point_arrayY[i] << std::endl;*/
	}
	int Traveler::getTravelTime() { return travelTime_; }
	int Traveler::getEndTime() { return endTime_; }
	int Traveler::getStartTime() { return startTime_; }
	std::string Traveler::getCost() { return cost_; }
	std::string Traveler::getLengthWay() { return lengthWay_; }
	std::string Traveler::getOwner() { return owner_; }
	Traveler::Traveler()
	{
		startTime_ = 0;
		endTime_ = 0;
		travelNumber_ = -1;
		countPoints_ = 0;
		travelTime_ = 0;
		pointArrayX_ = new int[0];
		pointArrayY_ = new int[0];
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
		delete[] pointArrayX_;
		delete[] pointArrayY_;
	}