//使用关键字explicit避免无意的隐式转换
#include <iostream>
using namespace std;

class Human
{
	int age;
public:
	//explicit constructor blocks implicit concerstion
	explicit Human(int humansAge) :age(humansAge) {}
};

void DoSomething(Human person)
{
	cout << "Human sent did something" << endl;
	return;
}

int main()
{
	Human kid(10);//explicit conversion is OK
	Human anotherKid = Human(11);//explicit,OK
	DoSomething(kid);//OK
	DoSomething(anotherKid);//OK

	//Human anotherKid2 = 11;//failure:implicit conversion not OK
	//DoSomething(10);//implicit conversion
	return 0;
}