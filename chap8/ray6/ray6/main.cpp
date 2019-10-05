//指向不同变量类型的指针的长度
#include <iostream>
using namespace std;

int main()
{
	cout << "sizeof fundamental types - " << endl;
	cout << "sizeof(char) = " << sizeof(char) << endl;
	cout << "sizeof(int) = " << sizeof(int) << endl;
	cout << "sizeof(double) = " << sizeof(double) << endl;

	cout << "sizeof pointers to fundaemental types -" << endl;
	cout << "sizeof(char*) = " << sizeof(char*) << endl;
	cout << "sizeof(int*) = " << sizeof(int*) << endl;
	cout << "sizeof(double*) = " << sizeof(double*) << endl;

	return 0;
}