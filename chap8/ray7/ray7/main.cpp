//使用解除引用运算符*访问使用new分配的内存，并使用delete释放它
#include <iostream>
using namespace std;

int main()
{
	//为一个int申请内存
	int* pointsToAge = new int;
	//利用申请的内存存储数据
	cout << "enter the dog age :";
	cin >> *pointsToAge;
	//使用解除引用运算符*取值
	cout << "age: " << *pointsToAge << " is stored at " << hex << pointsToAge << endl;
	//释放内存，只有通过new申请的内存才可以通过delete释放。
	delete pointsToAge;

	return 0;
}