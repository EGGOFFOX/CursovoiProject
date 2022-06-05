#pragma once
class StopInfo
{
public:
	int getX();
	void setX(int a);
	int getY();
	void setY(int a);
	int getminutes();
	void setminutes(int a);

private:
	int X;
	int Y;
	int minutesToNextPoint;
};