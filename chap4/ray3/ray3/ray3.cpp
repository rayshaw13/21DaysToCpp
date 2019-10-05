//访问多维数组中的元素
#include <iostream>
using namespace std;

int main()
{
	int threeRowsThreeColumns[3][3] = \
	{ {-21, 23, 34}, { 798,4653,101 }, { 303,404,202 }};

	cout << "row 0:" << threeRowsThreeColumns[0][0] << " "\
		<< threeRowsThreeColumns[0][1] << " "\
		<< threeRowsThreeColumns[0][2] << endl;

	return 0;
}