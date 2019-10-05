//包含多个构造函数的Human类
#include <iostream>
#include<string>
using namespace std;

class Human
{
public:
	Human()
	{
		age = 0;
		cout << "默认构造，名字和年纪没有设置。" << endl;
	}
	Human(string humansName, int humansAge)
	{
		name = humansName;
		age = humansAge;
		cout << "Overloaded constructor creates ";
		cout << name << " of " << age << " years" << endl;
	}

private:
	string name;
	int age;

};

int main()
{
	Human firstMan;
	Human firstWoman("Eve", 32);

	return 0;
}
