//鱼类世界呈现的一种简单的继承层次结构
#include<iostream>
using namespace std;

class Fish
{
public:
	bool isFreshWaterFish;
	void Swim()
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
	Tuna()
	{
		isFreshWaterFish = false;
	}
};

class Carp :public Fish
{
public:
	Carp()
	{
		isFreshWaterFish = true;
	}
};

int main()
{
	Carp myLunch;
	Tuna myDinner;

	cout << "about my food today: " << endl;
	cout << "my lunch: ";
	myLunch.Swim();
	cout << "my dinner: ";
	myDinner.Swim();

	return 0;
}