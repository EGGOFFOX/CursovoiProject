#pragma once
#include <vector>;
#include <string>;

struct StopInfo
{
	int X;
	int Y;
	int minutesToNextPoint;
};

class PointFinder
{
private:
	int countPoints_;
	std::vector<int> pointArrayX_;
	std::vector<int> pointArrayY_;
	int intervalStops_;
	int startTime_;
	int endTime_;
public:
	PointFinder(int interval,int start,int end, std::vector<int> pointArrayX,
		        std::vector<int> pointArrayY);
	StopInfo getPoint();
};