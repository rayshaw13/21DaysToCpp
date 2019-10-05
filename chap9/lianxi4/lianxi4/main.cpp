//编写一个circle类，根据实例化时提供的半径计算面积和周长，将pi包含于一个私有成员变量中，该常量不能在类外访问。
#include<iostream>
using namespace std;

class Circle
{
private:
	double pi;
	double radius;
public:
	Circle(double inputRaidus):
		radius ( inputRaidus), pi ( 3.14){}
	double GetCircle()
	{
		return 2 * pi*radius;
	}
	double GetArea()
	{
		return pi*radius*radius;
	}
};

int main()
{
	cout << "enter the radius: ";
	double radius = 0;
	cin >> radius;

	Circle myCircle(radius);
	cout << "圆的周长为：" << myCircle.GetCircle() << endl;
	cout << "圆的面积为：" << myCircle.GetArea() << endl;
	return 0;
}