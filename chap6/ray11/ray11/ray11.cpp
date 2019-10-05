//使用基于范围的for循环来处理数组和std::string
#include <iostream>
using namespace std;

int main()
{
	int someNums[] = { 1,101,-1,40,404 };

	for (const int&aNum : someNums)
		cout << aNum << ' ';
	cout << endl;

	for (auto anElement : { 5,222,110,-45,2017 })
		cout << anElement << ' ';
	cout << endl;

	char charArray[] = { 'h','e','l','l','o' };
	for (auto anChar : charArray)
		cout << anChar<<' ';
	cout << endl;

	double moreNums[] = { 3.14,-1.3,22,10101 };
	for (auto anElement : moreNums)
		cout << anElement << ' ';
	cout << endl;

	string sayHello{ "hello world!" };
	for (auto anElement : sayHello)
		cout << anElement << ' ';
	cout << endl;

	return 0;
}