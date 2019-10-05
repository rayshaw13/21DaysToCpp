//声明并初始化指针
#include <iostream>
using namespace std;

int main()
{
	int age = 30;
	int* pointedToInt = &age;//指针的初始化与声明

	//打印指针的值
	cout << "integer age is at: 0x" << hex << pointedToInt << endl;

	return 0;
}