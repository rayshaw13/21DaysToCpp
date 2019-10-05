//派生类Tuna和Carp覆盖了基类Fish的方法swim
#include <iostream>
using namespace std;

class Fish
{
protected:
	bool isFreshWaterFish;
public:
	Fish(bool isFreshWater) :isFreshWaterFish(isFreshWater) {}//构造函数
	void swim()
	{
		if (isFreshWaterFish)
			cout << "swim in lake" << endl;
		else
			cout << "swim in sea" << endl;
	}
};

class Tuna :public Fish
{
public:
	Tuna() :Fish(false) {}
	void swim()
	{
		cout << "it swims fast" << endl;
	}
};

class Carp :public Fish
{
public:
	Carp() :Fish(true) {}
	void swim()
	{
		cout << "it swims slow" << endl;
	}
};

int main()
{
	Tuna mylunch;
	Carp mydinner;
	cout << "here are my food" << endl;
	cout << "my lunch:";
	mylunch.swim();
	cout << "my dinner:";
	mydinner.swim();
	return 0;
}