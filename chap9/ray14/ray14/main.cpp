//友元类和友元函数
//使用关键字friend让外部函数displayage()能够访问私有数据成员
#include <iostream>
#include <string>
using namespace std;

class Human
{
private:
	friend void DisplayAge(const Human& person);//说明displayage是全局函数，同时是Human的友元，可以访问Human的私有变量
	string name;
	int age;
public:
	Human(string humansName, int humansAge)
	{
		name = humansName;
		age = humansAge;
	}
};

void DisplayAge(const Human& person)
{
	cout << person.age << endl;
}

int main()
{
	Human firstMan("Adam", 25);
	cout << "Accessing private member age via friend function: ";
	DisplayAge(firstMan);

	return 0;
}