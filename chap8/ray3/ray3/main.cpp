//给指针重新赋值，使其指向另一个变量
#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int* pointedToInt = &age;
	cout << "pointsToInt points to age now" << endl;

	cout << "pointedToInt = 0x" << hex << pointedToInt << endl;

	int dogsAge = 9;
	pointedToInt = &dogsAge;
	cout << "pointdToInt points to dogsAge now" << endl;

	cout << "pointedToInt = 0x" << hex << pointedToInt << endl;

	return 0;
}