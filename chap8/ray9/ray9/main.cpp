//使用偏移量和运算符来递增和递减指针
#include <iostream>
using namespace std;

int main()
{
	cout << "你想输入多少个数据：";
	int numEnter = 0;
	cin >> numEnter;

	int* pointsToInts = new int[numEnter];
	cout << "allocated for " << numEnter << " integers" << endl;
	//利用偏移量来递增指针进行输入
	for (int couter = 0; couter < numEnter; ++couter)
	{
		cout << "enter number " << couter << ": ";
		cin >> *(pointsToInts + couter);
	}

	cout << "displaying all numbers entered: " << endl;
	//利用运算符来递增指针进行输入
	for (int counter = 0; counter < numEnter; ++counter)
	{
		cout << *(pointsToInts++) << " ";
	}
	cout << endl;

	//24行的代码对pointsToInts进行了修改，因此在对新分配内存进行delete操作时，需要将指针变量改回原来定义时的地址
	pointsToInts -= numEnter;

	delete[] pointsToInts;
}