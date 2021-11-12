#pragma once
#include <string>;

class Traveler
{
private:
	int count_points;
	int TravelNumber;
	int* point_arrayX;
	int* point_arrayY;
	int startTime;
	int endTime;
	int TravelTime;
	std::string cost;
	std::string lengthWay;
	std::string owner;
public:
	void set_count_points(int count);
	void set_TravelNumber(int number);
	void set_point_arrayX(int* point_array);
	void set_point_arrayY(int* point_array);
	void set_TravelTime(int time);
	void set_startTime(int time);
	void set_endTime(int time);
	void set_cost(std::string str);
	void set_lengthWay(std::string str);
	void set_owner(std::string str);
	int get_count_points();
	int get_TravelNumber();
	void get_point_arrayX();
	void get_point_arrayY();
	int get_TravelTime();
	int get_endTime();
	int get_startTime();
	std::string get_cost();
	std::string get_lengthWay();
	std::string get_owner();
	Traveler();
	~Traveler();
};
