//编写模板函数Display()，它可使不同数量和类型的参数调用，并将所有的参数都显示出来
#include<iostream>
#include<string>
using namespace std;


void Display()
{

}
template <typename First, typename ...Last> void Display(First a, Last...U)
{
	cout << a << endl;
	Display(U...);
}

int main()
{
	Display('a');
	Display(3.14);
	Display('a', 3.14);
	Display('z', 3.1415, "the power of man");

	return 0;
}