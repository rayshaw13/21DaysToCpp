//实例化并使用std::tuple
#include<iostream>
#include<tuple>
#include<string>
using namespace std;

template <typename tupleType>
void DisplayTupleInfo(tupleType& tup)
{
	const int numbers = tuple_size<tupleType>::value;
	cout << "Num elements in tuple: " << numbers << endl;
	cout << "Last element value: " << get<numbers - 1>(tup) << endl;
}

int main()
{
	tuple<int, char, string> tup1(make_tuple(101, 's', "hello world"));
	DisplayTupleInfo(tup1);

	auto tup2(make_tuple(3.14, false));
	DisplayTupleInfo(tup2);

	auto concatTup(tuple_cat(tup2, tup1));//contains tup2,tup1 members
	DisplayTupleInfo(concatTup);

	double pi;
	string sentence;
	tie(pi, ignore, ignore, sentence) = concatTup;
	cout << "Unpacked! PI: " << pi << " and \"" << sentence << "\"" << endl;

	return 0;
}