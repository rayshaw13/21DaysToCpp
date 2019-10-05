//使用关键字auto依靠编译器的类型
#include<iostream>
using namespace std;
int main()
{
	auto coinFlippedHeads = true;
	auto largeNumber = 250000000000;

	cout << "coinFlippedHeads=" << coinFlippedHeads;
	cout << " , sizeof(coinFlippedHeads)= " << sizeof(coinFlippedHeads) << endl;

	cout << "largeNumber=" << largeNumber;
	cout << ", sizeof(largeNumber)= " << sizeof(largeNumber) << endl;
	return 0;
}