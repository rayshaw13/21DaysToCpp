//使用new(nothrow),它在分配内存失败时返回NULL
#include <iostream>
using namespace std;

int main()
{
	int* pointsToManyNums = new(nothrow) int[0x1fffffff];
	//如果没有nothrow的话，程序会崩溃；nothrow会保证无法分配内存时，返回null
	//即相当于初始化为NULL
	if (pointsToManyNums)
	{
		delete[] pointsToManyNums;
	}
	else
		cout << "memory allocation failed.ending program." << endl;

	return 0;
}