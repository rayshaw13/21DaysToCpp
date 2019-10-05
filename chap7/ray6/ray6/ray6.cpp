//在同一个函数中使用多条return语句
#include <iostream>

using namespace std;
const double pi = 3.1415;

void QueryAndCalculate()
{
	cout << "enter radius: ";
	double radius = 0;
	cin >> radius;

	cout << "Area: " << pi*radius*radius << endl;

	cout << "do you want to calculate circumference(y/n)?";
	char calcCircum = 'n';
	cin >> calcCircum;

	if (calcCircum == 'n')
		return;

	cout << "Circumference: " << 2 * pi*radius << endl;
	return;

}

int main()
{
	QueryAndCalculate();

	return 0;
}