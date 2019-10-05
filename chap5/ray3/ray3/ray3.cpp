//演示相等运算符和关系运算符
#include<iostream>
using namespace std;

int main()
{
	cout << "enter two integers:" << endl;
	int num1 = 0, num2 = 0;
	cin >> num1;
	cin >> num2;

	bool isEqual = (num1 == num2);
	cout << "result of isEqual test: " << isEqual << endl;

	bool isUnequal = (num1 != num2);
	cout << "result of isUnequal test: " << isUnequal << endl;

	bool isGreaterThan = (num1 > num2);
	cout << "result of " << num1 << ">" << num2;
	cout << " test: " << isGreaterThan << endl;

	bool isLessThan = (num1 < num2);
	cout << "result of " << num1 << "<" << num2 << " test: " << isLessThan << endl;
	return 0;
}