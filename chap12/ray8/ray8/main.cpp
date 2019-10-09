//重载复制赋值运算符,(=)
//对程序清单9.9所示的MyString类进行改进，添加复制赋值运算符
#include<iostream>
using namespace std;
#include<string.h>

class MyString
{
private:
	char* buffer;
public:
	MyString(const char* initialInput)
	{
		if (initialInput != NULL)
		{
			buffer = new char[strlen(initialInput) + 1];
			strcpy(buffer, initialInput);
		}
		else
			buffer = NULL;
	}
	//copy assignment operator
	MyString& operator=(const MyString& copySource)
	{
		if ((this != &copySource) && (copySource.buffer != NULL))
		{
			if (buffer != NULL)
				delete[] buffer;

			//ensure deep copy by first allocating own buffer

			buffer = new char[strlen(copySource.buffer) + 1];

			//copy from the source into local buffer
			strcpy(buffer, copySource.buffer);
		}
		return *this;
	}

	operator const char*()
	{
		return buffer;
	}

	
	~MyString()
	{
		delete[] buffer;
	}
};

int main()
{
	MyString string1("Hello ");
	MyString string2(" World");

	cout << "Before assignment: " << endl;
	cout << string1 << string2 << endl;
	string2 = string1;
	cout << "After assignment string2 = string1: " << endl;
	cout << string1 << string2 << endl;
	return 0;
}