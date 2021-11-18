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
	float cost_;
	float lengthWay_;
	std::string owner_;
public:
	void setTravelNumber(int number);
	void setPointArrayX(int* pointArray, int count);
	void setPointArrayY(int* pointArray, int count);
	void setTravelTime(int time);
	void setStartTime(int time);
	void setEndTime(int time);
	void setCost(float cost);
	void setLengthWay(float length);
	void setOwner(std::string str);
	int getCountPoints();
	int getTravelNumber();
	int* getPointArrayX();
	int* getPointArrayY();
	int getTravelTime();
	int getEndTime();
	int getStartTime();
	float getCost();
	float getLengthWay();
	std::string getOwner();
	Traveler();
	~Traveler();
};
