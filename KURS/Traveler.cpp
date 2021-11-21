#include <string>
#include <vector>
#include "Traveler.h"

//TODO : handling exceptions
	void Traveler::setTravelNumber(int number) 
	{
		if (number > 0)
			travelNumber_ = number; 
	}
	void Traveler::setPointArrayX(std::vector<int> pointArray) 
	{ 
		countPoints_ = pointArray.size();
		pointArrayX_ = pointArray;
	}
	void Traveler::setPointArrayY(std::vector<int> pointArray)
	{
		countPoints_ = pointArray.size();
		pointArrayY_ = pointArray;
	}
	void Traveler::setIntervalStops(int time) 
	{ 
		if (time > 0)
			intervalStops_ = time;
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
	std::vector<int> Traveler::getPointArrayX()
	{
		return pointArrayX_;
	}
	std::vector<int> Traveler::getPointArrayY()
	{
		return pointArrayY_;
	}
	int Traveler::getIntervalStops() { return intervalStops_; }
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
		intervalStops_ = 0;
	}
	Traveler::~Traveler()
	{
	}