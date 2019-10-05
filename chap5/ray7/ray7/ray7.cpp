//使用按位右移(>>)和左移(<<)运算符求得整数的倍数和分数
#include<iostream>
using namespace std;

int main()
{
	cout << "enter a number: ";
	int inputNum = 0;//初始化
	cin >> inputNum;

	int halfNum = inputNum >> 1;
	int quarterNum = inputNum >> 2;
	int doubleNum = inputNum << 1;
	int quadrupleNum = inputNum << 2;

	cout << "Quarter: " << quarterNum << endl;
	cout << "Half: " << halfNum << endl;
	cout << "Double: " << doubleNum << endl;
	cout << "Quadruple: " << quadrupleNum << endl;
	return 0;
}