//使用const引用确保被调用的函数不能修改按引用传入的值
#include <iostream>
using namespace std;

void getSquareo(const int& number,int& result)
{
	result = number*number;
}

int main()
{
	cout << "enter a number you wish to square: ";
	int numberIn = 0;
	cin >> numberIn;

	int square = 0;
	getSquareo(numberIn, square);
	cout << "number" << "^2 = " << square << endl;

	return 0;

}