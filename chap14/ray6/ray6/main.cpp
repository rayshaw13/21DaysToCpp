//模板类和静态成员
//如果模板类包含静态成员，该成员将在针对与int具体化的所有实例之间共享，同样的，也会在针对与double具体化的实例之间共享，且与针对int具体化的实例无关

//静态成员对模板类和实例的影响
#include<iostream>
using namespace std;

template <typename T>
class TestStatic
{
public:
	static int staticVal;
};

//static member initialization
template<typename T> int TestStatic<T>::staticVal;

int main()
{
	TestStatic<int> intInstance;
	cout << "Setting staticVal for intInstance to 2011" << endl;
	intInstance.staticVal = 2011;

	TestStatic<double> dblInstance;
	cout << "Setting staticVal for dblInstance to 1011" << endl;
	dblInstance.staticVal = 1011;

	cout << "intInstance.staticVal = " << intInstance.staticVal << endl;
	cout << "dblInstance.staticVal = " << dblInstance.staticVal << endl;

	return 0;
}