//演示如何对用户输入的整数执行算术运算
#include <iostream>
using namespace std;

int main()
{
	cout << "enter two integers:" << endl;
	int num1 = 0, num2 = 0;//初始化
	cin >> num1;
	cin >> num2;

	cout << num1 << "+" << num2 << "=" << num1 + num2 << endl;
	cout << num1 << "-" << num2 << "=" << num1 - num2 << endl;
	cout << num1 << "*" << num2 << "=" << num1 * num2 << endl;
	cout << num1 << "/" << num2 << "=" << num1 / num2 << endl;
	cout << num1 << "%" << num2 << "=" << num1 % num2 << endl;
	return 0;
}