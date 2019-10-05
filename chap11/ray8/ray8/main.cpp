//ray7程序正常应该保证鸭嘴兽只有一个age属性，但实际不是那么回事，要保证正常执行，可将三个Animal派生类声明为virtual，鸭嘴兽声明为final
//
#include<iostream>
using namespace std;

class Animal
{
public:
	Animal()
	{
		cout << "Animal constructed" << endl;
	}
	int age;
};

class Mammal :public virtual Animal
{
};

class Reptile :public virtual Animal
{
};

class Bird :public virtual Animal
{
};

class Platypus final :public Mammal, public Reptile, public Bird //使用关键字final以禁止将Platypus用作基类
{
public:
	Platypus()
	{
		cout << "Platypus constructed" << endl;
	}
};

int main()
{
	Platypus duckBilled;
	duckBilled.age = 23;
	cout << "鸭嘴兽年龄为：" << duckBilled.age << endl;
	return 0;
}