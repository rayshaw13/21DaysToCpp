//使用构造函数初始化类成员变量
#include <iostream>
#include<string>
using namespace std;

class Human
{
private:
	int age;
	string name;

public:
	Human()//构造函数
	{
		age = 0;//初始化
		cout << "构造了一个Human实例" << endl;
	}
	void SetName(string humansName)
	{
		name = humansName;
	}
	void SetAge(int humansAge)
	{
		age = humansAge;
	}
	void IntroduceSelf()
	{
		cout << "I am " + name << " and am ";
		cout << age << " years old" << endl;
	}
};

int main()
{
	Human firstMan;
	firstMan.SetName("David");
	firstMan.SetAge(28);

	firstMan.IntroduceSelf();

	return 0;
}