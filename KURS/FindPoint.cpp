#include <string>
#include <vector>
#include "FindPoint.h";
#include <ctime>;
#include <iostream>;

PointFinder::PointFinder(int interval, int start, int end, std::vector<int> pointArrayX,
                         std::vector<int> pointArrayY)
{
    countPoints_ = pointArrayX.size();
	intervalStops_ = interval;
	startTime_ = start;
	endTime_ = end;
	pointArrayX_ = pointArrayX;
    pointArrayY_ = pointArrayY;
 
}
StopInfo PointFinder::getPoint()
{
    time_t now = time(0);
    tm* ltm = localtime(&now);
    int currentHours = ltm->tm_hour;
    int currentTimeInMinutes = ltm->tm_min + currentHours * 60;
    int workingMinutes;
    int currentCircleWorkingMinutes;
    int countCompletedStopsInCurrentCircle;
    int minutesToNextStop;
    StopInfo Stop;

    if (currentTimeInMinutes < startTime_ || currentTimeInMinutes > endTime_) {
        Stop.setX(pointArrayX_[0]);
        Stop.setY(pointArrayY_[0]);
        Stop.setminutes(intervalStops_);
    }
    else
    {
        workingMinutes = currentTimeInMinutes - startTime_;
        currentCircleWorkingMinutes = workingMinutes % (intervalStops_ * countPoints_);
        countCompletedStopsInCurrentCircle = currentCircleWorkingMinutes / intervalStops_;
        minutesToNextStop = currentCircleWorkingMinutes % intervalStops_;
        Stop.setX(pointArrayX_[countCompletedStopsInCurrentCircle]);
        Stop.setY(pointArrayY_[countCompletedStopsInCurrentCircle]);
        Stop.setminutes(minutesToNextStop);
    }
    return Stop;
}