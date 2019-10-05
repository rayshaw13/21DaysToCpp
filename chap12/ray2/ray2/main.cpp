//在Date类中实现转换运算符const char*
#include<iostream>
#include<sstream>
#include<string>
using namespace std;

class Date
{
private:
	int day, month, year;
	string dateInString;
public:
	Date(int inMonth, int inDay, int inYear)
		:month(inMonth), day(inDay), year(inYear) {};
	operator const char*()
	{
		ostringstream formattedDate;
		formattedDate << month << " / " << day << " / " << year;
		dateInString = formattedDate.str();
		return dateInString.c_str();
	}
};

int main()
{
	Date Holiday(12, 25, 2019);
	cout << "Holiday is on: " << Holiday << endl;

	return 0;
}