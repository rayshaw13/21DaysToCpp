//实现运算符+=与-=
//定义运算符+=和-=，以便将日历向前或者向后翻整型输入参数指定的天数
#include <iostream>
using namespace std;

class Date
{
private:
	int day, month, year;
public:
	Date(int inMonth, int inDay, int inYear)
		:month(inMonth), day(inDay), year(inYear) {};
	void operator+=(int daysToAdd)
	{
		day += daysToAdd;
	}

	void operator-=(int daysToSub)
	{
		day -= daysToSub;
	}

	void DisplayDate()
	{
		cout << month << " / " << day << " / " << year << endl;
	}
};

int main()
{
	Date holiday(12, 25, 2019);
	cout << "Holiday on: ";
	holiday.DisplayDate();

	cout << "holiday += 5 gives: ";
	holiday += 25;
	holiday.DisplayDate();

	cout << "holiday -= 19 gives: ";
	holiday -= 19;
	holiday.DisplayDate();

	return 0;
}