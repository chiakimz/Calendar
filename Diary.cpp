#include "Diary.h"
#include "Calendar.h"


Diary::Diary()
{
}

void Diary::input()
{
	std::cout << "Write today's diary :)" << std::endl;
	std::cin >> diary;
}

void Diary::printDiary()
{
	std::cout << diary << std::endl;
}

Diary::~Diary()
{
}
