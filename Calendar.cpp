#include "Calendar.h"



Calendar::Calendar()
{
}

void Calendar::IsWeekend()
{
	if (DayOfWeek == "Saturday" || DayOfWeek == "Sunday")
		std::cout << "It's a weekend yaaaall!" << std::endl;
	else
		std::cout << "weekday it is, tough luck" << std::endl;
}

bool Calendar::ValidMonth()
{
	if (Month > 0 && Month < 13)
		return true;
}

void Calendar::Load()
{
	std::cout << "DayOfWeek:" << std::endl;
	std::cin >> DayOfWeek;

	std::cout << "Day:" << std::endl;
	std::cin >> Day;

	std::cout << "Month:" << std::endl;
	std::cin >> Month;
	while (!ValidMonth())
	{
		std::cout << "Invalid month, try again! Month:" << std::endl;
		std::cin >> Month;
	}

	std::cout << "Year" << std::endl;
	std::cin >> Year;
}

void Calendar::Print()
{
	std::cout << DayOfWeek << ", " << Day << "/" << Month << "/" << Year << std::endl;
}

Calendar::~Calendar()
{
}
