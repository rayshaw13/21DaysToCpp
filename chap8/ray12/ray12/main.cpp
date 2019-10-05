//使用接触引用运算符*访问数组中的元素以及将数组运算符[]用于指针
//数组变量就是指针，因此*可以用于数组，也可以将[]用于指针
#include <iostream>
using namespace std;

int main()
{
	const int numArray = 5;
	int myNums[numArray] = { 24,-1,234,-999,10 };

	int* pointToNums = myNums;
	//*运算符用于数组
	cout << "指针运算符用于数组" << endl;
	for (int index = 0; index < numArray; ++index)
		cout << "element " << index << " = " << *(myNums + index) << endl;
	//[]运算符用于指针
	cout << "数组运算符用于指针" << endl;
	for (int index = 0; index < numArray; ++index)
		cout << "element " << index << " = " << pointToNums[index] << endl;

	return 0;
}