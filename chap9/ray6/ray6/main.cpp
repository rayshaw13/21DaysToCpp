//接受带默认值的参数的默认构造函数，并使用初始化列表来设置成员
#include <iostream>
#include<string>
using namespace std;

class Human
{
public:
	Human(string humansName = "Adam", int humansAge = 35)
		:name(humansName), age(humansAge)
	{
		cout << "Constructed a human called " << name;
		cout << ", " << age << " years old" << endl;
	}
	//~Human();

private:
	int age;
	string name;
};

int main()
{
	Human adam;
	Human eve("Eve", 29);

	return 0;
}