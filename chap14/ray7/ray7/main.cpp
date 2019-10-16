//参数数量可变的模板，如 编写一个函数，能够计算任意数量值的和
//使用参数数量可变的模板
#include<iostream>
using namespace std;

template <typename Res,typename ValType>
void Sum(Res& result, ValType& val)
{
	result = result + val;
}

template <typename Res,typename First,typename... Rest>
void Sum(Res& result, First val1, Rest... valN)
{
	result = result + val1;
	return Sum(result, valN...);
}

int main()
{
	double dResult = 0;
	Sum (dResult, 3.14, 4.56, 1.00021);
	cout << "dResult = " << dResult << endl;

	string strResult;
	Sum(strResult, "Hello", "World");
	cout << "strResult = " << strResult.c_str() << endl;

	return 0;
}