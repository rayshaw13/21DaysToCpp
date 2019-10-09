//重载等于运算符==和不等运算符!=
#include<iostream>
using namespace std;

class Date
{
private:
	int day, month, year;
public:
	Date(int inMonth, int inDay, int inYear)
		:month(inMonth), day(inDay), year(inYear) {};

	bool operator==(const Date& compareTo)
	{
		return((day == compareTo.day)
			&&(month==compareTo.month)
			&&(year==compareTo.year));
	}

	bool operator !=(const Date& compareTo)
	{
		return !(this->operator==(compareTo));
	}

	void DisplayDate()
	{
		cout << month << " / " << day << " / " << year << endl;
	}
};

int main()
{
	Date holiday1(12, 25, 2017);
	Date holiday2(12, 31, 2017);

	cout << "holiday 1 is: ";
	holiday1.DisplayDate();
	cout << "holiday 2 is: ";
	holiday2.DisplayDate();

	if (holiday1 == holiday2)
		cout << "Equality operator: The two are on the same day" << endl;
	else
		cout << "not on the same day" << endl;

	if (holiday1 != holiday2)
		cout << "Inequality operator: The two are not on the same day" << endl;
	else
		cout << "are on the same day" << endl;

	return 0;
}