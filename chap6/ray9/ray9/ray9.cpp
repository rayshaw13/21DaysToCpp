//使用for循环填充和显示静态数组的元素
#include <iostream>
using namespace std;

int main()
{
	const int ARRAY_LENGTH = 5;
	int myNums[ARRAY_LENGTH] = { 0 };

	cout << "populate array of " << ARRAY_LENGTH << " integers " << endl;

	for (int counter = 0; counter < ARRAY_LENGTH; ++counter)
	{
		cout << "enter an integer for element " << counter << ":" <<endl;
		cin >> myNums[counter];
	}

	cout << "display contents of the array: " << endl;

	for (int counter = 0; counter < ARRAY_LENGTH; ++counter)
	{
		cout << "element " << counter << " = " << myNums[counter] << endl;
	}
	return 0;
}