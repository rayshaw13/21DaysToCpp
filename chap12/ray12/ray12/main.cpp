//用户定义的字面量
//将华氏温度和摄氏温度转换为开尔文温度
#include<iostream>
using namespace std;

struct Temperature
{
	double Kelvin;
	Temperature(long double kelvin) :Kelvin(kelvin) {}
};

Temperature operator "" _C(long double celcius)
{
	return Temperature(celcius + 273);
}

Temperature operator "" _F(long double fahrenheit)
{
	return Temperature((fahrenheit + 459.67) * 5 / 9);
}

int main()
{
	Temperature k1 = 31.73_F;
	Temperature k2 = 0.0_C;//如果是0_C，那么0将被解读为整型数据

	cout << "k1 is " << k1.Kelvin << " Kelvin" << endl;
	cout << "k2 is " << k2.Kelvin << " Kelvin" << endl;

	return 0;
}