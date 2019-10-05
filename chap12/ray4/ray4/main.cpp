//实现双目加法运算符的日历类
#include<iostream>
using namespace std;

class Date
{
private:
	int day, month, year;
	string dateInString;
public:
	Date(int inMonth, int inDay, int inYear)
		:month(inMonth), day(inDay), year(inYear) {};

	Date operator+(int dayToAdd)//binary addition
	{
		Date newDate(month, day + dayToAdd, year);
		return newDate;
	}

	Date operator-(int dayToSub)//binary subtraction
	{
		Date newDate(month, day - dayToSub, year);
		return newDate;
	}

	void DisplayDate()
	{
		cout << month << " / " << day << " / " << year << endl;
	}
};

int main()
{
	Date Holiday(12, 25, 2019);
	cout << "Holiday on: ";
	Holiday.DisplayDate();

	Date previousHoliday(Holiday - 19);
	cout << "Previous holiday is on: ";
	previousHoliday.DisplayDate();

	Date nextHoliday(Holiday + 6);
	cout << "Next holiday is on: ";
	nextHoliday.DisplayDate();
	return 0;
}

