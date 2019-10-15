//chap14 宏和模板简介
//#define可以定义常量，也可以定义宏函数

//声明并使用定义常量的宏
#include<iostream>
#include<string>
using namespace std;

#define ARRAY_LENGTH 25
#define PI 3.1416
#define MY_DOUBLE double
#define FAV_WHISKY "Jack Daniels"

int main()
{
	int numbers[ARRAY_LENGTH] = { 0 };
	cout << "array's length is: " << sizeof(numbers) << endl;

	cout << "Enter a radius: ";
	MY_DOUBLE radius = 0;
	cin >> radius;
	cout << "area is: " << (PI*radius*radius) << endl;

	string favoriteWhisky(FAV_WHISKY);
	cout << " my beer is: " << favoriteWhisky << endl;

	return 0;
}

//定义常量时，更好的选择是使用const和数据类型，因为使用#define无法决定数据的类型

//使用宏避免多次包含。有的情况下，两个头文件彼此包含对方，导致递归问题，可结合使用宏以及预处理器编译指令#ifndef和#endif。