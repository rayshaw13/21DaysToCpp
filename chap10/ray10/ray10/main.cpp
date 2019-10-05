//多继承
//使用多继承模拟具备哺乳动物、鸟类和爬行动物特征的鸭嘴兽
#include <iostream>
using namespace std;

class Mammal
{
public:
	void FeedBabyMilk()
	{
		cout << "Mammal: Baby says glug!" << endl;
	}
};

class Reptile
{
public:
	void SpitVenom()
	{
		cout << "Reptile: Shoo enemy! Spits venom!" << endl;
	}
};

class Bird
{
public:
	void LayEggs()
	{
		cout << "Bird: Laid my eggs, am lighter now" << endl;
	}
};

class Platypus : public Mammal, public Reptile, public Bird
{
public:
	void Swim()
	{
		cout << "Platypus: Voila,I can swim" << endl;
	}
};

int main()
{
	Platypus realFreak;
	realFreak.LayEggs();
	realFreak.FeedBabyMilk();
	realFreak.SpitVenom();
	realFreak.Swim();

	return 0;
}

//注：被声明final的类不能用作基类，对于上面的程序，如果将class Platypus定义为class Platypus final:public ....，
//那么，新建的类将不能继承鸭嘴兽类。