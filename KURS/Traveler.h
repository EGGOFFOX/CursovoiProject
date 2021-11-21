#pragma once
#include <vector>;
#include <string>;

class Traveler
{
private:
	int countPoints_;
	int travelNumber_;
	std::vector<int> pointArrayX_;
	std::vector<int> pointArrayY_;
	int startTime_;
	int endTime_;
	int intervalStops_;
	float cost_;
	float lengthWay_;
	std::string owner_;
public:
	void setTravelNumber(int number);
	void setPointArrayX(std::vector<int> pointArray);
	void setPointArrayY(std::vector<int> pointArray);
	void setIntervalStops(int time);
	void setStartTime(int time);
	void setEndTime(int time);
	void setCost(float cost);
	void setLengthWay(float length);
	void setOwner(std::string str);
	int getCountPoints();
	int getTravelNumber();
	std::vector<int> Traveler::getPointArrayX();
	std::vector<int> Traveler::getPointArrayY();
	int getIntervalStops();
	int getEndTime();
	int getStartTime();
	float getCost();
	float getLengthWay();
	std::string getOwner();
	Traveler();
	~Traveler();
};
