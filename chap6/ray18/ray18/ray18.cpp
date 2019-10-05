//显示斐波那契数列，可以让用户确定输出数字的数目
#include <iostream>
using namespace std;

int main()
{
	int num1 = 0, num2 = 1;
	cout << "enter the number you want to get:";
	int  numUser = 0;
	cin >> numUser;

	char charUser = '\0';
	do
	{
		for (int counter = 0; counter < numUser; ++counter)
		{
			cout << num1+num2 << " ";
			int num2add = num2;
			num2 = num1+num2;
			num1 = num2add;
			
		}
		cout <<endl<< "Get more numbers?(y/n)";
		cin >> charUser;
	} while (charUser == 'y');
	return 0;
}