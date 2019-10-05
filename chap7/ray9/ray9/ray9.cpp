//以引用参数（而不是返回值）的方式提供圆的面积
#include <iostream>
using namespace std;

const double pi = 3.1416;

void Area(double radius, double& area)
{
	//注意输入参数里的&，同时函数定义的是void型，没有返回值
	area = pi*radius*radius;
}

int main()
{
	cout << "enter the radius: ";
	double radius = 0;
	cin >> radius;

	double areaFetched = 0;
	Area(radius, areaFetched);//注意该句

	cout << "the area is: " << areaFetched << endl;

	return 0;
}