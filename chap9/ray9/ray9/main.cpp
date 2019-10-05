//使用复制构造函数确保深复制
//定义一个复制构造函数，确保对动态分配的缓冲区进行深复制
#include <iostream>
#include <string.h>
using namespace std;

class MyString
{
private:
	char* buffer;

public:
	MyString(const char* initString)//constructor
	{
		buffer = NULL;
		cout << "Default constructor:creating new MyString" << endl;
		if (initString != NULL)
		{
			buffer = new char[strlen(initString) + 1];
			strcpy(buffer, initString);

			cout << "buffer points to: 0x" << hex;
			cout << (unsigned int*)buffer << endl;
		}
	}

		MyString(const MyString& copySource)//copy constructor
		{
			buffer = NULL;
			cout << "copy constructor:copying from MyString" << endl;
			if (copySource.buffer != NULL)
			{
				//allocate own buffer
				buffer = new char[strlen(copySource.buffer) + 1];

				//deep copy from the source into local buffer
				strcpy(buffer, copySource.buffer);

				cout << "buffer points to: 0x" << hex;
				cout << (unsigned int*)buffer << endl;
			}
		}
		//Destructor
		~MyString()
		{
			cout << "Invoking destructor,clearing up" << endl;
			delete[] buffer;
		}
		int GetLength()
		{
			return strlen(buffer);
		}
		const char* GetString()
		{
			return buffer;
		}
	
};

void UseMyString(MyString str)
{
	cout << "String buffer in MyString is " << str.GetLength();
	cout << "characters long" << endl;

	cout << "buffer contains: " << str.GetString() << endl;
	return;
}

int main()
{
	MyString sayHello("Hello from String Class");
	UseMyString(sayHello);

	return 0;
}