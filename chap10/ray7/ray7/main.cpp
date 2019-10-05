//Tuna实例不再在作用域内时，析构顺序与构造顺序相反。
//基类、派生类及其成员的构造顺序和析构顺序
#include <iostream>
using namespace std;

class FishDummyMember
{
public:
	FishDummyMember()
	{
		cout << "FishDummyMember constructor" << endl;
	}
	~FishDummyMember()
	{
		cout << "FishDummyMember destructor" << endl;
	}
};

class Fish
{
protected:
	FishDummyMember dummy;
public:
	Fish()
	{
		cout << "fish constructor" << endl;
	}
	~Fish()
	{
		cout << "fish destructor" << endl;
	}
};

class TunaDummyMember
{
public:
	TunaDummyMember()
	{
		cout << "TunaDummyMember constructor" << endl;
	}
	~TunaDummyMember()
	{
		cout << "TunaDummyMember destructor" << endl;
	}
};

class Tuna:public Fish
{
private:
	TunaDummyMember dummy;
public:
	Tuna()
	{
		cout << "Tuna constructor" << endl;
	}
	~Tuna()
	{
		cout << "Tuna destructor" << endl;
	}
};

int main()
{
	Tuna mydinner;
	return 0;
}