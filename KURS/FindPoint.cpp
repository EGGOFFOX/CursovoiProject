#include <string>
#include <vector>
#include "FindPoint.h";
#include <ctime>;
void PointFinder::setXY(std::vector<int> pointArray)
{
	count = pointArray.size();
	XY_Array= pointArray;
}

void PointFinder::setS_time(int time)
{
		if (time > 0)
			s_time = time;
}
void PointFinder::setEnd_time(int time)
{
	if (time > 0)
	{
		end_time = time;
	}
}
void PointFinder::setInterval(int time)
{
	if (time > 0)
	{
		interval = time;
	}
}
PointFinder::PointFinder(int interv, int start, int end, std::vector<int> pointArrayXY)
{
	interval = interv;
	s_time = start;
	end_time = end;
	XY_Array = pointArrayXY;

}
int PointFinder::getPoint()
{
	time_t now = time(0);
	tm *ltm = localtime(&now);
	int hour=ltm->tm_hour;
	int minut=ltm->tm_min;
	int s_hour=0, s_minut=0, end_hour=0, end_minut=0;
	s_hour = s_time / 60;
	s_minut = s_time % 60;
	end_hour = end_time / 60;
	end_minut = end_time % 60;

	int i = 0;
	int s = count;
	int curr_in_min = hour * 60 + minut;
	int start_in_min = s_time;
	int interv_ = curr_in_min-start_in_min;
	int raznic = 0;
	int proideno = 0;
	while (start_in_min < curr_in_min)
	{
		if(start_in_min+ interval>=curr_in_min)
		{
			raznic = start_in_min + interval - curr_in_min;
			proideno = interval - raznic;
			start_in_min=curr_in_min;
		}
		start_in_min += interval;
		
	}int ostal = 0;
	int kolvo_in_one = interval / XY_Array.size();
		ostal = proideno / kolvo_in_one;
		if (end_hour <= hour)
		{
			if(end_minut<=minut)	return XY_Array[0];
		}
		if (ostal > count) ostal = count;
		return XY_Array[ostal];
}