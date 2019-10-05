//一个有重载的构造函数，但没有默认构造函数的类
#include<iostream>
#include<string>
using namespace std;

class Human
{
private:
	int age;
	string name;
public:
	Human(string humansName,int humansAge)
	{
		name = humansName;
		age = humansAge;
	}
	void IntroduceSelf()
	{
		cout << " I am " + name << " and am ";
		cout << age << " years old" << endl;
	}
};

int main()
{
	Human firstMan("David", 32);
	Human firstWoman("Eve", 22);

	firstMan.IntroduceSelf();
	firstWoman.IntroduceSelf();

	return 0;
}
