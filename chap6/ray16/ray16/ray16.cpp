//编写一个for循环，以倒序方式访问数组元素
#include <iostream>
using namespace std;

int main()
{	
	const int array_len = 5;
	int numsArray[array_len] = { 1,2,3,4,5 };

	for (int counter = array_len-1; counter >= 0; --counter)
	{
		cout << numsArray[counter] << " ";
	}
	cout << endl;
	return 0;
}