//使用嵌套if语句执行乘法或者除法运算
#include<iostream>
using namespace std;

int main()
{
	cout << "enter two numbers: " << endl;
	float num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;

	cout << "enter 'd' to divide, anything else to multiply: " << endl;
	char userSelection = '\0';
	cin >> userSelection;

	if (userSelection == 'd')
	{
		cout << "you wish to divide!" << endl;
		if (num2 != 0)
			cout << num1 << "/" << num2 << " = " << (num1 / num2) << endl;
		else
			cout << "division by zero is not allowed" << endl;
	}
	else
	{
		cout << "you wish to multiply!" << endl;
		cout << num1 << "*" << num2 << " = " << (num1*num2) << endl;
	}
	return 0;
}