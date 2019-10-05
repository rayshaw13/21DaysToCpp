//两个根据半径分别计算圆的面积和周长的函数
#include<iostream>
using namespace std;

const double pi = 3.14159265;
//函数声明
double Area(double radius);
double Circumference(double radius);
int main()
{
	cout << "enter radius: ";
	double radius=0;
	cin >> radius;

	//调用函数
	cout << "Area is: " << Area(radius) << endl;
	cout << "Circumference is: " << Circumference(radius) << endl;

	return 0;
}
double Area(double radius)
{
	return pi*radius*radius;
 }
double Circumference(double radius)
{
	return 2 * pi*radius;
}