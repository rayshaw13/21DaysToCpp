//在基类方法和 main( )中，使用作用域解析运算符（::）来调用基类方法
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
	Tuna() :Fish(true) {}//构造函数
	void swim()
	{
		cout << "swim fast" << endl;
		Fish::swim();//使用作用域运算符::调用基类Fish方法
	}
};

class Carp :public Fish
{
public:
	Carp() :Fish(false) {}//构造函数
	void swim()
	{
		cout << "swim slow" << endl;
	}
};

int main()
{
	Tuna mylunch;
	Carp mydinner;
	cout << "here are my food:" << endl;
	cout << "lunch:";
	mylunch.swim();
	cout << "dinner:";
	mydinner.swim();
	mydinner.Fish::swim();//表示要调用fish里的swim方法

	return 0;
}