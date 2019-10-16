//一个挑剔的模板类，它使用static_assert在您针对int类型实例化时发出抗议
#include<iostream>
using namespace std;

template <typename T>
class EverythingButInt
{
public:
	EverythingButInt()
	{
		static_assert(sizeof(T) != sizeof(int), "No int please!");
	}
};

int main()
{
	EverythingButInt<int> test;
	return 0;
}