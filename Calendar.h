#pragma once
#include <iostream>
#include <string>

class Calendar
{
public:
	Calendar();
	~Calendar();

private:
	std::string DayOfWeek;
	int Day;
	int Month;
	int Year;
	bool ValidMonth();
	std::string date[4]; //array to store the input data

public:
	void IsWeekend();
	void Load();
	void Print();
};

