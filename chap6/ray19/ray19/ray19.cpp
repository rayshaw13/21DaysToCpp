//编写switch-case结构，指出用户选择的颜色是否出现在彩虹中
//使用枚举常量
#include <iostream>
using namespace std;

int main()
{
	enum colors
	{
		violet=0,
		indigo,
		blue,
		green,
		yellow,
		orange,
		red,
		crimson,
		beige,
		brown,
		peach,
		pink,
		white,
	};
	cout << "here are the available colors: " << endl;
	cout << "violet: " << violet << endl;
	cout << "indigo: " << indigo << endl;
	cout << "blue:" << blue << endl;
	cout << "green: " << green << endl;
	cout << "yellow: " << yellow << endl;
	cout << "orange: " << orange << endl;
	cout << "red: " << red << endl;
	cout << "crimson: " << crimson << endl;
	cout << "beige: " << beige << endl;
	cout << "brown: " << brown << endl;
	cout << "peach: " << peach << endl;
	cout << "pink: " << pink << endl;
	cout << "white: " << white << endl;

	cout << "choose one by entering code: ";
	int colorChose = blue;
	cin >> colorChose;

	switch (colorChose)
	{
	case violet:
	case indigo:
	case blue:
	case green:
	case yellow:
	case orange:
	case red:
		cout << "bingo,your choice is a rainbow color!" << endl;
		break;
	}
	return 0;
}