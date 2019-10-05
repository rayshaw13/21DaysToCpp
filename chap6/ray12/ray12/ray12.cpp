//使用continue进入下一个循环，并使用break退出无限循环
#include<iostream>
using namespace std;

int main()
{
	for (;;)//无限循环
	{
		cout << "enter two integers: " << endl;
		int num1 = 0, num2 = 0;
		cin >> num1;
		cin >> num2;

		cout << "do you wish to correct the numbers?(y/n)" << endl;
		char changeNumbers = '\0';
		cin >> changeNumbers;

		if (changeNumbers == 'y')
			continue;//当输入y需要修改数字时，重启新的循环，

		cout << num1 << " x " << num2 << " = " << (num1*num2) << endl;
		cout << num1 << " + " << num2 << " = " << (num1 + num2) << endl;

		cout << "press x to quit or other to continue:" << endl;
		char userSelection = '\0';
		cin >> userSelection;

		if (userSelection == 'x')
			break;//使用break跳出循环体
	}
	cout << "Goodbye!" << endl;
	return 0;
}