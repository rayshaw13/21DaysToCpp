//抽象基类，定义抽象基类，那么就不能实例化基类，但是抽象基类会保证派生类必须实现基类中声明的函数 
//程序11.6 Fish是Tuna和Carp的抽象基类
#include<iostream>
using namespace std;

class Fish
{
public:
	//define a pure virtual function Swim
	virtual void Swim() = 0;
};

class Tuna :public Fish
{
public:
	void Swim()
	{
		cout << "Tuna swims fast in the sea!" << endl;
	}
};

class Carp :public Fish
{
public:
	void Swim()
	{
		cout << "Carp swims slow in the lake" << endl;
	}
};

void MakeFishSwim(Fish& inputFish)
{
	inputFish.Swim();
}

int main()
{
	//Fish MyFish; //无法创建Fish的实例
	Carp myLunch;
	Tuna myDinner;

	MakeFishSwim(myLunch);
	MakeFishSwim(myDinner);

	return 0;
}