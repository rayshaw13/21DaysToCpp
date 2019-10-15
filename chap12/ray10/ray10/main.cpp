//一个使用operator()实现的函数对象 
#include<iostream>
#include<string>
using namespace std;

class Display
{
public:
	void operator () (string input) const
	{
		cout << input << endl;
	}
};

int main()
{
	Display displayFuncObj;

	//equivalent to diaplayFuncObj.operator () ("Display this string");
	displayFuncObj("Display this string");

	return 0;
}