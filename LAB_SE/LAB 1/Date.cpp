#include"Date.h"
Date::Date():day(15),month(2),year(2002)
{}
Date::Date(int d, int m, int y):Date()
{ 
	if (d > 0 && d <= 30)
	{
		day = d;
	}
	if (m > 0 && m <= 12)
	{
		month = m;
	}
	if (y > 0)
	{
		year = y;
	}
}
void Date::setDate(int d, int m, int y)
{
	setDay(d);
	setMonth(m);
	setYear(y);
}
void Date::setDay(int d)
{
	if (d > 0 && d <= 30)
	{
		day = d;
	}
}
void Date::setMonth(int m)
{
	if (m > 0 && m <= 12)
	{
		month = m;
	}
}
void Date::setYear(int y)
{
	if (y > 0)
	{
		year = y;
	}
}
int Date::getDay()const
{
	return day;
}
int Date::getMonth()const
{
	return month;
}
int Date::getYear()const
{
	return year;
}
void Date::addDays(int days)
{
	if (days >= 0)
	{
		day += days;
		if (day > 30)
		{
			month += (day / 30);
			day = day % 30;
			if (month > 12)
			{
				year += (month / 12);
				month = month % 12;
			}
		}
	}
}
void Date::subtractDays(int days)
{
	if (days >= 0)
	{
		day -= days;
		if (day <= 0)
		{
			month -= ((day / 30) + 1);
			day = 30 + day;
			if (month <= 0)
			{
				year -= ((month / 12)+1);
				month = 12 + month;
			}
		}
	}
}
void Date::displayDate()
{
	cout << monthNames[month - 1] << ' ' << day << ", " << year;
}
Date::~Date()
{
	day = 15;
	month = 2;			//Default Date
	year = 2002;
}