//使用枚举量指示基本方位
#include<iostream>
using namespace std;
enum CardinalDirections
{
	//四个方位定义为枚举常量，其数字一次递增。
	North = 25,
	South,
	East,
	West
};

int main()
{
	cout << "Displaying directions and their symbolic values" << endl;
	cout << "North: " << North << endl;
	cout << "South: " << South << endl;
	cout << "East: " << East << endl;
	cout << "West: " << West << endl;

	CardinalDirections windDirection = South;//将windDirection定义为CardinalDirections类型，初始值为South.
	cout << "Variable windDirection = " << windDirection << endl;
	return 0;
}