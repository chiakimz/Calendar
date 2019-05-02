#pragma once
#include <iostream>
#include <string>

class Diary
{
public:
	Diary();
	~Diary();
private:
	std::string diary;
public:
	void input();
	void printDiary();
};

