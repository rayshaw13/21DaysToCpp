//更安全的指针编程
#include <iostream>
using namespace std;

int main()
{
	cout << "is it sunny (y/n)? ";
	char userInput = 'y';
	cin >> userInput;

	//指针声明和初始化
	bool* const isSunny = new bool;
	*isSunny = true;

	if (userInput == 'n')
		*isSunny = false;

	cout << "boolean flag sunny says: " << *isSunny << endl;

	//释放有效内存
	delete isSunny;

	return 0;
}