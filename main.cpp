#include "Calendar.h"
#include "Diary.h"

int main()
{
	Calendar cal;
	Diary d;

	cal.Load();
	d.input();
	cal.Print();
	d.printDiary();
	cal.IsWeekend();

	d.input();

	return 0;
}