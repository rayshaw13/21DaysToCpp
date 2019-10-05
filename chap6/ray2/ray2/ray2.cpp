//将字符串复制到char数组中之前，检查数组的容量
#include<iostream>
#include<string>
#include<string.h>
using namespace std;
int main()
{
	cout << "enter a line of text: "<<endl;
	string userInput;//字符串初始化
	getline(cin, userInput);//输入字符串

	char copyInput[20] = { '\0' };
	if (userInput.length() < 20)
	{
		strcpy(copyInput, userInput.c_str());
		cout << "copyInput contains: " << copyInput << endl;
	}
	else
		cout << "Bounds exceeded: won't copy!" << endl;
	return 0;
}