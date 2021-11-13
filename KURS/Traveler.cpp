#include <string>
#include <iostream>
#include "Traveler.h"

//TODO : handling exceptions
	void Traveler::setTravelNumber(int number) 
	{
		if (number > 0)
			travelNumber_ = number; 
	}
	void Traveler::setPointArrayX(int* pointArray, int count) 
	{ 
		if (count > 0) 
		{
			countPoints_ = count;
			delete[] pointArrayX_;
			pointArrayX_ = pointArray;
		}
	}
	void Traveler::setPointArrayY(int* pointArray, int count) 
	{
		if (count > 0)
		{
			countPoints_ = count;
			delete[] pointArrayY_;
			pointArrayY_ = pointArray;
		}
	}
	void Traveler::setTravelTime(int time) 
	{ 
		if (time > 0)
			travelTime_ = time; 
	}
	void Traveler::setStartTime(int time) 
	{ 
		if (time > 0)
			startTime_ = time; 
	}
	void Traveler::setEndTime(int time) 
	{ 
		if(time > 0)
			endTime_ = time; 
	}
	void Traveler::setCost(float cost) 
	{ 
		if(cost > 0)
			cost_ = cost; 
	}
	void Traveler::setLengthWay(float length) 
	{ 
		if(length > 0)
			lengthWay_ = length; 
	}
	void Traveler::setOwner(std::string str) 
	{ 
		owner_ = str; 
	}
	int Traveler::getCountPoints() { return countPoints_; }
	int Traveler::getTravelNumber() { return travelNumber_; }
	int* Traveler::getPointArrayX()
	{
		int* pointArray = new int[countPoints_];
		for (int i = 0; i < countPoints_; i++) {
			pointArray[i] = pointArrayX_[i];
		}
		return pointArray;
	}
	int* Traveler::getPointArrayY()
	{
		int* pointArray = new int[countPoints_];
		for (int i = 0; i < countPoints_; i++) {
			pointArray[i] = pointArrayY_[i];
		}
		return pointArray;
	}
	int Traveler::getTravelTime() { return travelTime_; }
	int Traveler::getEndTime() { return endTime_; }
	int Traveler::getStartTime() { return startTime_; }
	float Traveler::getCost() { return cost_; }
	float Traveler::getLengthWay() { return lengthWay_; }
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
	Traveler::~Traveler()
	{
		delete[] pointArrayX_;
		delete[] pointArrayY_;
	}