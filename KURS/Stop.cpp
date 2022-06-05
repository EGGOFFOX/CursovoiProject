#include "Stop.h"

void StopInfo::setX(int a)
{
	X = a;
}

void StopInfo::setminutes(int a)
{
	minutesToNextPoint = a;
}

void StopInfo::setY(int a)
{
	Y = a;
}
int StopInfo::getminutes()
{
	return minutesToNextPoint;
}
int StopInfo::getX()
{
	return X;
}
int StopInfo::getY()
{
	return Y;
}