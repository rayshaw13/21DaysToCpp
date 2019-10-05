//前缀运算符和后缀运算符的差别
#include<iostream>
using namespace std;

int main()
{
	int startValue = 101;//初始化
	cout << "start value of integer being operated: " << endl;

	int postfixIncrement = startValue++;//后缀
	cout << "result of postfix increment= " << postfixIncrement << endl;
	cout << "after postfix increment,startValue= " << startValue << endl;

	startValue = 101;//重置
	int prefixIncrement = ++startValue;
	cout << "result of prefix increment= " << prefixIncrement << endl;
	cout << "after prefix increment,startValue= " << startValue << endl;

	return 0;
}