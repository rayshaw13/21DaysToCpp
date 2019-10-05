//使用new[...]分配内存，并使用delete[]释放它们
#include <iostream>
#include <string>
using namespace std;

int main()
{
	cout << "我想输入数据的数目：";
	int numEntries = 0;
	cin >> numEntries;

	int* myNums = new int[numEntries];

	cout << "memory allocated at: 0x" << myNums << endl;

	delete[] myNums;
	return 0;
}