//设计多参数函数，计算圆柱的表面积
#include <iostream>
using namespace std;

const double pi = 3.1415926;

//函数声明
double Area(double radius, double height);
//主函数
int main()
{
	cout << "enter the radius: ";
	double radius = 0;
	cin >> radius;
	cout << "enter the height: ";
	double height = 0;
	cin >> height;

	cout << "Area is : " << Area(radius, height) << endl;
	return 0;
}
double Area(double radius,double height)
{
	return 2 * pi*radius*radius + 2 * pi*radius*height;
}