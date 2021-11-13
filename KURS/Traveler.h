#pragma once
#include <string>;

class Traveler
{
private:
	int countPoints_;
	int travelNumber_;
	int* pointArrayX_;
	int* pointArrayY_;
	int startTime_;
	int endTime_;
	int travelTime_;
	std::string cost_;
	std::string lengthWay_;
	std::string owner_;
public:
	void setCountPoints(int count);
	void setTravelNumber(int number);
	void setPointArrayX(int* pointArray);
	void setPointArrayY(int* pointArray);
	void setTravelTime(int time);
	void setStartTime(int time);
	void setEndTime(int time);
	void setCost(std::string str);
	void setLengthWay(std::string str);
	void setOwner(std::string str);
	int getCountPoints();
	int getTravelNumber();
	void getPointArrayX();
	void getPointArrayY();
	int getTravelTime();
	int getEndTime();
	int getStartTime();
	std::string getCost();
	std::string getLengthWay();
	std::string getOwner();
	Traveler();
	~Traveler();
};
