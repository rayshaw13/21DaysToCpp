//对整数的各位执行NOT\AND\OR\XOR运算，演示按位运算的用法
#include<iostream>
#include<bitset>
using namespace std;

int main()
{
	cout << "enter a number (0-255): ";
	unsigned short inputNum = 0;//初始化
	cin >> inputNum;

	bitset<8> inputBits = (inputNum);
	cout << inputNum << " in binary is " << inputBits << endl;

	bitset<8> bitwiseNOT = (~inputNum);
	cout << "logical NOT ~" << endl;
	cout << "~" << inputBits << " = " << bitwiseNOT << endl;


}