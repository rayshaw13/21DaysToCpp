//一个值得编译的human类
#include <iostream>
#include <string>
using namespace std;

class Human
{
public:
	string name;
	int age;

	void IntroduceSelf()
	{
		cout << "I am " + name << " and am ";
		cout << age << " years old" << endl;
	}
};

int main()
{
	Human firstMan;
	firstMan.name = "Adam";
	firstMan.age = 30;

	Human firstWoman;
	firstWoman.name = "Eve";
	firstWoman.age = 28;

	firstMan.IntroduceSelf();
	firstWoman.IntroduceSelf();

	return 0;
}