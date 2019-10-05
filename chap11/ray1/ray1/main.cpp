//多态
//将Tuna实例传递给Fish参数，并通过该参数调用方法
#include <iostream>
using namespace std;

class Fish
{
public:
	void swim()
	{
		cout << "fish swim" << endl;
	}
};

class Tuna :public Fish
{
public:
	void swim()
	{
		cout << "Tuna swim" << endl;
	}
};

void childTuna(Fish& inputFish)
{
	inputFish.swim();
}

int main()
{
	Tuna mydinner;
	mydinner.swim();
	childTuna(mydinner);

	return 0;
}