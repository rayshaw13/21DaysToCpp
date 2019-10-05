//计算圆面积的函数，其中第二个参数位pi，默认值位3.14
#include <iostream>
using namespace std;

//函数声明
double Area(double radius, double pi = 3.14);

int main()
{
	cout << "enter the radius:";
	double radius = 0;
	cin >> radius;

	double CircleArea = 0;
	cout << "the pi is 3.14, if you want to change?(y/n)";
	char userSelect = 'n';
	cin >> userSelect;

	if (userSelect == 'y')
	{
		cout << "input the new pi:";
		double newPi = 0;
		cin >> newPi;

		CircleArea = Area(radius, newPi);
	}
	else
	{
		CircleArea = Area(radius);
	}
	cout << "the area is :" << CircleArea << endl;
	return 0;
}

double Area(double radius, double pi)
{
	return pi*radius*radius;
}