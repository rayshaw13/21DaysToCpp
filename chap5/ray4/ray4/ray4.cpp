//分析C++逻辑运算符&&和||
#include<iostream>
using namespace std;

int main()
{
	cout << "enter true(1) or false(0) for two operands:";
	bool op1 = false, op2 = false;//初始化
	cin >> op1;
	cin >> op2;

	cout << op1 << " AND " << op2 << " = " << (op1&&op2) << endl;
	cout << op1 << " OR " << op2 << " = " << (op1 || op2) << endl;

	return 0;
}