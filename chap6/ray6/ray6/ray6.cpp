//使用运算符?:找出两个数字中较大的那个
#include <iostream>
using namespace std;

int main()
{
	cout << "enter two numbers" << endl;
	int num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;

	int max = (num1 > num2) ? num1 : num2;
	cout << "the greater of " << num1 << " and " << num2 << " is: " << max << endl;
	return 0;
}