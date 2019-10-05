//根据用户输入决定将两个正数相乘还是相加
#include<iostream>
using namespace std;

int main()
{
	cout << "enter two integers: ";
	int num1 = 0, num2 = 0;//初始化
	cin >> num1;
	cin >> num2;

	cout << "enter \'m\' to multiply, anything else to add: ";
	char userSelection = '\0';
	cin >> userSelection;

	int result = 0;
	if (userSelection == 'm')
		result = num1*num2;
	else
		result = num1 + num2;

	cout << "result is: " << result << endl;

	return 0;
}