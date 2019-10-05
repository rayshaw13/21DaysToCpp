//使用递归函数计算斐波那契数列中的数字
#include <iostream>
using namespace std;

int GetFibNumber(int fibIndex);

int GetFibNumber(int fibIndex)
{
	if (fibIndex < 2)
		return fibIndex;
	else
		return GetFibNumber(fibIndex - 1) + GetFibNumber(fibIndex - 2);
}

int main()
{
	cout << "enter 0-based index of desired Fibonacci Number: ";
	int index = 0;
	cin >> index;

	cout << "Fibonacci number is: " << GetFibNumber(index) << endl;
	return 0;
}