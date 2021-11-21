#pragma once
#include <vector>;
#include <string>;

class PointFinder
{
private:
	int count;
	std::vector<int> XY_Array;
	
	int interval;
	int s_time;
	int end_time;
public:
	void setXY(std::vector<int> pointArray);
	void setInterval(int time);
	void setS_time(int time);
	void setEnd_time(int time);
	/*std::vector<int> PointFinder::getArrayX();
	int getinterval();
	int gets_time();
	int getend_time();
	*/
	PointFinder(int interv,int start,int end, std::vector<int> pointArrayXY);
	int getPoint();
//	~PointFinder();
};