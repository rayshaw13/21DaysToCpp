//一个对外隐藏真实年龄并将自己说的更年轻的Human类
#include <iostream>
using namespace std;

class Human
{
private:
	int age;

public:
	void SetAge(int inputAge)
	{
		age = inputAge;
	}

	int GetAge()
	{
		if (age > 30)
			return (age - 2);
		else
			return age;
	}
};

int main()
{
	Human firstMan;
	firstMan.SetAge(35);
	Human firstWoman;
	firstWoman.SetAge(22);

	cout << "age of firstman " << firstMan.GetAge() << endl;
	cout << "age of firstwoman " << firstWoman.GetAge() << endl;

	return 0;
}