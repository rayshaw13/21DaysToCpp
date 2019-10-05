//嵌套循环，以倒序方式将一个数组的每个元素都与另一个数组的每个元素相加
#include <iostream>
using namespace std;

int main()
{
	const int num1_len = 3;
	const int num2_len = 4;
	int numsArray1[num1_len] = { 1,2,3 };
	int numsArray2[num2_len] = { 7,5,3,1 };

	for (int counter1 = num1_len - 1; counter1 >= 0; --counter1)
	{
		for (int counter2 = num2_len - 1; counter2 >= 0; --counter2)
		{
			cout << numsArray1[counter1] << " + " << numsArray2[counter2] << " = "\
				<< numsArray1[counter1] + numsArray2[counter2] << endl;

		}
	}
	return 0;
}