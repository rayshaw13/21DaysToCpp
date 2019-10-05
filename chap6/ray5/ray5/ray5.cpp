//使用switch-case、break和default指出一个星期的各天是哪颗星星命名的
#include <iostream>
using namespace std;

int main()
{
	enum  DaysOfWeek
	{
		Sunday=0,
		Monday,
		Tuesday,
		Wednesday,
		Thursday,
		Friday,
		Saturday
	};
	cout << "find what days of the week are named after!" << endl;
	cout << "enter a number for a day (Sunday=0): ";
	int dayInput = Sunday;//初始化为星期天
	cin >> dayInput;//输入

	switch (dayInput)
	{
	case Sunday:
		cout << "Sunday was named after the Sun" << endl;
		break;
	case Monday:
		cout << "Monday was named after the  Moon" << endl;
		break;
	case Tuesday:
		cout << "Tuesday was named after the Mars" << endl;
		break;
	case Wednesday:
		cout << "Wednesday was named after the Mercury" << endl;
		break;
	case Thursday:
		cout << "Thursday was named after the Jupiter" << endl;
		break;
	case Friday:
		cout << "Friday was named after the Venus" << endl;
		break;
	case Saturday:
		cout << "Saturday was named after the Saturn" << endl;
		break;

	default:
		cout << "wrong input, execute again" << endl;
		break;
	}
	return 0;
}