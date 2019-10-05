//保护继承机制（protected），与private继承类似，但是在保护继承层次结构中，子类的子类能够访问基类的公有和保护成员。
//但如果子类与基类的继承是私有的，那么就不可以这么做
//RaceCar类以保护方式继承了Car类，Car类以保护方式继承了Motor类
#include <iostream>
using namespace std;

class Motor
{
public:
	void switchIgnation()
	{
		cout << "Ignation ON" << endl;
	}
	void PumpFuel()
	{
		cout << "Fuel in cylinders" << endl;
	}
	void fireCylinders()
	{
		cout << "Vrooooom" << endl;
	}
};

class Car :protected Motor
{
public:
	void move()
	{
		switchIgnation();
		PumpFuel();
		fireCylinders();
	}
};

class RaceCar :protected Car
{
public:
	void move()
	{
		switchIgnation();
		PumpFuel();
		fireCylinders();
		fireCylinders();
		fireCylinders();
	}
};

int main()
{
	RaceCar myDreamCAR;
	myDreamCAR.move();
	return 0;
}