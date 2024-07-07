#ifndef DATE_H
#define DATE_H
#include"String.h"
class Date
{
	int day;
	int month;
	int year;
	String monthNames[12] = { "January","February","March","April","May","June","July","August","September","October","November","December" };
public:
	Date();
	Date(int, int, int);
	void setDate(int, int, int);
	void setDay(int);
	void setMonth(int);
	void setYear(int);
	int getDay()const;
	int getMonth()const;
	int getYear()const;
	void addDays(int days);
	void subtractDays(int days);
	void displayDate();
	~Date();
};
#endif // !DATE_H
