//在if语句中使用逻辑not和and运算符进行条件处理
#include<iostream>
using namespace std;

int main()
{
	cout << "use boolean values(0/1) to answer the questions" << endl;
	cout << "is it raining? ";
	bool isRaining = false;//初始化
	cin >> isRaining;

	cout << "do you have buses on the streets? ";
	bool busesPly = false;
	cin >> busesPly;

	//conditional statement uses logical AND and NOT
	if (isRaining && !busesPly)
		cout << "you cannot go to work" << endl;
	else
		cout << "you can go to work" << endl;

	if (isRaining&&busesPly)
		cout << "take an umbrella" << endl;

	if ((!isRaining) && busesPly)
		cout << "enjoy the sun and have a nice day" << endl;
	return 0;
}