//Tuna::Swim()隐藏了重载方法Fish::Swim(bool)
#include <iostream>
using namespace std;

class Fish
{
public:
	void Swim()
	{
		cout << "fish swim ... !" << endl;
	}

	void Swim(bool isFreshWaterFish)//overloaded version
	{
		if (isFreshWaterFish)
			cout << "Swim in lake" << endl;
		else
			cout << "swim in sea" << endl;
	}
};

class Tuna :public Fish
{
public:
	void Swim()
	{
		cout << "Tuna swims real fast" << endl;
	}
};

int main()
{
	Tuna mydinner;
	cout << "about my food" << endl;
	mydinner.Swim();
	mydinner.Fish::Swim();
	system("pause");
	return 0;
}