//单目递增与单目递减运算符
//一个处理日月年的日历类，可对日期执行递增和递减操作
#include <iostream>
using namespace std;

class Date
{
private:
	int day, month, year;
public:
	Date(int inMonth, int inDay, int inYear)
		:month(inMonth), day(inDay), year(inYear) {};
	Date& operator++()// prefix increment
	{
		++day;
		return *this;
	}

	Date& operator--()//prefix decrement
	{
		--day;
		return *this;
	}

	Date operator ++(int)//postfix increment
	{
		Date copy(month, day, year);
		++day;
		return copy;
	}

	Date operator --(int)//postfix decrement
	{
		Date copy(month, day, year);
		--day;
		return copy;
	}

	void DisplayDate()
	{
		cout << month << " / " << day << " / " << year << endl;
	}
};

int main()
{
	Date holiday(12, 25, 2019);
	cout << "the date object is initialized to: ";
	holiday.DisplayDate();

	++holiday;
	cout << "date after prefix-increment is: ";
	holiday.DisplayDate();

	--holiday;
	cout << "date after prefix-decrement is: ";
	holiday.DisplayDate();

	holiday++;
	cout << "date after postfix-increment is: ";
	holiday.DisplayDate();

	holiday--;
	cout << "date after postfix-decrement is: ";
	holiday.DisplayDate();
	return 0;
}