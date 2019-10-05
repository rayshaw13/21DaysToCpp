//给数组元素赋值
#include <iostream>
using namespace std;
//使用常量表达式
constexpr int Square(int number) { return number*number; }

int main()
{
	const int ARRAY_LENGTH = 5;
	//定义5个元素的数组
	int myNumbers[ARRAY_LENGTH] = { 5,10,-11,12,13 };

	//调用常量表达式定义25个元素的数组
	int moreNumbers[Square(ARRAY_LENGTH)];

	//更改一个数组元素

	//给出待更改元素的位置
	cout << "请输入待更改元素的序列：";
	int numberIndex = 0;
	cin >> numberIndex;

	//给出新的元素值
	cout << "请输入新元素值：";
	int newValue = 0;
	cin >> newValue;

	//对两个数组分别进行更改
	myNumbers[numberIndex] = newValue;
	moreNumbers[numberIndex] = newValue;

	cout << "element " << numberIndex << " in array myNumbers is: ";
	cout << myNumbers[numberIndex] << endl;

	cout << "element " << numberIndex << " in array moreNumbers is: ";
	cout << moreNumbers[numberIndex] << endl;

	//cout << "新的myNumbers数组为：" << myNumbers << endl;
	//cout << "新的moreNumbers数组为：" << moreNumbers << endl;
	return 0;
}