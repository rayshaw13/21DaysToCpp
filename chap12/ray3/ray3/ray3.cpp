// ray3.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include<iostream>
#include<memory> //new include to use unique_ptr
using namespace std;

class Date
{
private:
	int day, month, year;
	string dateInString;

public:
	Date(int inMonth, int inDay, int inYear)
		:month(inMonth), day(inDay), year(inYear) {};
	void DisplayDate()
	{
		cout << month << " / " << day << " / " << year << endl;
	}
};

int main()
{
	unique_ptr<int> smartIntPtr(new int);
	*smartIntPtr = 42;
	//use smart pointer type like an int*
	cout << "Integer value is: " << *smartIntPtr << endl;

	unique_ptr<Date> smartHoliday(new Date(12, 25, 2019));
	cout << "The new instance of date contains: ";

	//use smartHoliday just as you would a Date*
	smartHoliday->DisplayDate();

	return 0;
}

