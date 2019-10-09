//ÊµÏÖÔËËã·û<,>,<=,>=
#include<iostream>
using namespace std;

class Date
{
private:
	int day, month, year;
public:
	Date(int inMonth, int inDay, int inYear)
		:month(inMonth), day(inDay), year(inYear) {};

	bool operator<(const Date& compareTo)
	{
		if (year < compareTo.year)
			return true;
		else if (month < compareTo.month)
			return true;
		else if (day < compareTo.day)
			return true;
		else
			return false;
	}

	bool operator<=(const Date& compareTo)
	{
		if (this->operator==(compareTo))
			return true;
		else
			return this->operator<(compareTo);
	}

	bool operator>(const Date& compareTo)
	{
		return !(this->operator<=(compareTo));
	}

	bool operator==(const Date& compareTo)
	{
		return ((year == compareTo.year)
			&& (month == compareTo.month)
			&& (day == compareTo.day));
	}

	bool operator>=(const Date& compareTo)
	{
		return !(this->operator<(compareTo));
	}

	void DisplayDate()
	{
		cout << month << " / " << day << " / " << year << endl;
	}
};

int main()
{
	Date holiday1(12, 25, 2016);
	Date holiday2(12, 31, 2016);

	cout << "holiday 1 is on: ";
	holiday1.DisplayDate();
	cout << "holiday 2 is on: ";
	holiday2.DisplayDate();

	if (holiday1 > holiday2)
		cout << "holiday2 happens first" << endl;
	if (holiday1 < holiday2)
		cout << "holiday1 happens first" << endl;
	if (holiday1 >= holiday2)
		cout << "holiday2 happens first or on the same day" << endl;
	if (holiday1 <= holiday2)
		cout << "holiday1 happens first or on the same day" << endl;

	return 0;
}