//没有参数和返回值的函数
#include <iostream>
using namespace std;

//函数声明
void SayHello();

int main()
{
	SayHello();
	return 0;
}

void SayHello()
{
	cout << "Hello World!"<<endl;
	return;
}