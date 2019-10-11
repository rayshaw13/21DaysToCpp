//下标运算符
//12.9 在MyString类中实现下标运算符，以便随机访问MyString::buffer包含的字符
#include<iostream>
#include<string>
#include<string.h>
using namespace std;

class MyString
{
private:
	char* buffer;//buffer指向数据开始的地址，char*表示强制转换
	//private default constructor
	MyString() {}
public:
	//constructor
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

	//copy constructor:insert from Listing 9.9 here
	MyString(const MyString& copySource);

	//copy assignment operator:insert from Listing 12.8 here
	MyString& operator=(const MyString& copySource);

	const char& operator[] (int index) const
	{
		if (index < GetLength())
			return buffer[index];
	}

	//destructor
	~MyString()
	{
		if (buffer != NULL)
			delete[] buffer;
	}

	int GetLength() const
	{
		return strlen(buffer);
	}

	operator const char*()
	{
		return buffer;
	}
};

int main()
{
	cout << "Type a statement: ";
	string strInput;
	getline(cin, strInput);

	MyString youSaid(strInput.c_str());

	cout << "Using operator[] for displaying your input: " << endl;
	for (int index = 0; index < youSaid.GetLength(); ++index)
		cout << youSaid[index] << " ";
	cout << endl;

	cout << "enter index 0 - " << youSaid.GetLength() - 1 << ": ";
	int index = 0;
	cin >> index;
	cout << "Input character at zero-based position: " << index;
	cout << " is: " << youSaid[index] << endl;

	return 0;
}