//测验及练习
//编写两个重载函数，分别使用下列公式计算球和圆柱的体积
#include <iostream>
using namespace std;
const double pi = 3.1416;

//函数声明
double Volume(double radius);
double Volume(double radius, double height);

int main()
{
	cout << "enter the radius: ";
	double radius = 0;
	cin >> radius;

	cout << "enter the height: ";
	double height = 0;
	cin >> height;

	cout << "球的体积为：" << Volume(radius) << endl;
	cout << "圆柱的体积为：" << Volume(radius, height) << endl;

	return 0;
}

double Volume(double r)
{
	return (4 * pi*r*r*r) / 3;
}

double Volume(double r, double h)
{
	return (pi*r*r*h);
}