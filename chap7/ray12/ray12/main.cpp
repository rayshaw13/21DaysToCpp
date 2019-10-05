/*编写一个返回类型为void的函数，在提供半径的情况下，
能够帮助计算圆的周长和面积*/
#include <iostream>
using namespace std;

const double pi = 3.1416;

void circumlence(double  radius, double& result)
{
	result = 2 * pi*radius;
}


void CirAndArea(double radius, double& cirResult, double& areaResult)
{
	cirResult= 2 * pi*radius;
	areaResult = pi*radius*radius;
}

int main()
{
	cout << "enter the radius: ";
	double radius=0;
	cin >> radius;

	double circumlenceFetched = 0;

	circumlence(radius, circumlenceFetched);
	cout << "方法一：" << endl;

	cout << "圆的周长为：" << circumlenceFetched << endl;
	cout << "圆的面积为：" << 0.5*circumlenceFetched*radius << endl;

	double cirResultFetched = 0;
	double areaResultFetched = 0;

	CirAndArea(radius, cirResultFetched, areaResultFetched);
	cout << "方法二：" << endl;

	cout << "圆的周长为：" << cirResultFetched << endl;
	cout << "圆的面积为：" << areaResultFetched << endl;

	return 0;
}