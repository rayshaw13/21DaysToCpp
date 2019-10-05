// ray4.cpp : 定义控制台应用程序的入口点。
//创建int动态数组并动态地插入值

#include "stdafx.h"
#include<vector>
#include<iostream>
using namespace std;

int main()
{
	vector<int>dynArray(3);//定义动态数组
	dynArray[0] = 356;
	dynArray[1] = 231;
	dynArray[2] = 23;

	cout << "数组中元素的个数为：" << dynArray.size() << endl;

	cout << "输入一个新值，插入到数组末尾：" << endl;
	int newValue = 0;
	cin >> newValue;
	dynArray.push_back(newValue);

	cout << "数组中元素的个数为：" << dynArray.size() << endl;
	cout << "数组最后一个元素为：" << dynArray[dynArray.size()-1] << endl;
    return 0;
}

