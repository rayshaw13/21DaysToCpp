//编写一个将两个数相乘的宏
#define mutiplie(x,y) ((x)*(y))

//编写一个模板，实现练习4中宏的功能
template <typename T> T split(const T& input)
{
	return (input / 5);
}

//实现模板函数swap，它交换两个变量的值
template <typename T> 
void swap(T& x, T& y)
{
	T temp = x;
	x = y;
	y = temp;
}

//查错
#define QUARTER(x) ((x)/4)

//编写一个简单的模板类，它存储两个数组。。。
template <typename Array1Type,typename Array2Type>
class TwoArrays
{
private:
	Array1Type Array1[10];
	Array2Type Array2[10];
public:
	Array1Type& GetArray1Element(int index) { return Array1[index] };
	Array2Type& GetArray2Element(int index) { return Array2[index] };
};