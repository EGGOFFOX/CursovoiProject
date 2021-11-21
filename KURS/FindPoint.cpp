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
        Stop.X = pointArrayX_[0];
        Stop.Y = pointArrayY_[0];
        Stop.minutesToNextPoint = intervalStops_;
    }
    else
    {
        workingMinutes = currentTimeInMinutes - startTime_;
        currentCircleWorkingMinutes = workingMinutes % (intervalStops_ * countPoints_);
        countCompletedStopsInCurrentCircle = currentCircleWorkingMinutes / intervalStops_;
        minutesToNextStop = currentCircleWorkingMinutes % intervalStops_;
        Stop.X = pointArrayX_[countCompletedStopsInCurrentCircle];
        Stop.Y = pointArrayY_[countCompletedStopsInCurrentCircle];
        Stop.minutesToNextPoint = minutesToNextStop;
    }
    return Stop;
}