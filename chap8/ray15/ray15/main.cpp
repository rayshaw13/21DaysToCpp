//异常处理-在new失败时妥善地退出
#include <iostream>
using namespace std;

int main()
{
	try
	{
		//申请内存
		int* pointsToManyNums = new int[0x1fffffff];

		delete[] pointsToManyNums;
	}
	catch (bad_alloc)
	{
		cout << "memory allocation failed.ending program" << endl;
	}

	return 0;
}