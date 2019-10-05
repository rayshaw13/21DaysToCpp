//获取int变量和double变量的地址
#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	const double pi = 3.1416;

	cout << "integer age is located at: 0x" << &age << endl;
	cout << "double pi is located at: 0x" << &pi << endl;

	return 0;
}