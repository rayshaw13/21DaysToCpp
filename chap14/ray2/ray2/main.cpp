//使用#define编写宏函数
//使用计算平方值/圆面积/最小值和最大值的宏函数
#include<iostream>
#include<string>
using namespace std;

#define SQUARE(x) ((x)*(x))
#define PI 3.1416
#define AREA_CIRCLE(r) ((PI)*(r)*(r))
#define MAX(a,b) (((a)>(b))?(a):(b))
#define MIN(a,b) (((a)<(b))?(a):(b))

int main()
{
	cout << "Enter an integer: ";
	int num = 0;
	cin >> num;

	cout << "SQUARE(" << num << ")= " << SQUARE(num) << endl;
	cout << "AREA of a circle with radius " << num << " is: ";
	cout << AREA_CIRCLE(num) << endl;

	cout << "enter another integer: ";
	int num2 = 0;
	cin >> num2;

	cout << "MAX(" << num << ", " << num2 << ") =";
	cout << MAX(num, num2) << endl;
	cout << "MIN(" << num << ". " << num2 << ") =";
	cout << MIN(num, num2) << endl;

	return 0;
}

//宏不考虑数据类型，因此可能会带来问题
//通过使用括号，使宏代码不受运算符优先级的影响
//