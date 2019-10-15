//模板，让程序员定义一种适用于不同类型对象的行为，相比于宏，模板是类型安全的。
//模板函数，编写一个函数，适用于不用类型的参数
//模板函数GetMax，它返回两个参数中较大的一个
#include<iostream>
#include<string>
using namespace std;

template <typename Type>
const Type& GetMax(const Type& value1, const Type& value2)
{
	if (value1 > value2)
		return value1;
	else
		return value2;
}

template <typename Type>
void DisplayComparison(const Type& value1, const Type& value2)
{
	cout << "GetMax(" << value1 << ", " << value2 << ") = ";
	cout << GetMax(value1, value2) << endl;
}

int main()
{
	int num1 = -101, num2 = 2011;
	DisplayComparison(num1, num2);

	double d1 = 3.14, d2 = 3.1416;
	DisplayComparison(d1, d2);

	string name1("Jack"), name2("John");
	DisplayComparison(name1, name2);

	return 0;
}