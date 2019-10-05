// ray5.cpp : 定义控制台应用程序的入口点。
//使用std::string

#include "stdafx.h"
#include <iostream>
#include<string>
using namespace std;

int main()
{
	string greetString("Hello std::string!");
	cout << greetString << endl;
	
	cout << "enter a new line of text:" << endl;
	string firstLine;
	getline(cin, firstLine);

	cout << "enter another line:" << endl;
	string secondLine;
	getline(cin, secondLine);

	cout << "result of concatenation: " << endl;
	string concatString = firstLine + " " + secondLine;
	cout << concatString << endl;

	cout << "copy of concatenated string: " << endl;
	string aCopy;
	aCopy = concatString;
	cout << aCopy << endl;

	cout << "length of concat string: " << concatString.length() << endl;

    return 0;
}

