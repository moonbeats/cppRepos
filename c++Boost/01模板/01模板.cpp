#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//数据交换
void mySwap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//模板技术，模板参数化，编写代码可以忽略具体类型
template<typename T>
void mySwap(T& a, T& b)
{
	T temp = a;
	a = b;
	b = a;
}

void test01()
{
	int a = 10;
	int b = 20;
	//1,自动类型推导
	
	cout << " a: " << a << " b: " << b << endl;
	mySwap(a, b);
	cout << " a: " << a << " b: " << b << endl;
	//2,显示指定类型
	mySwap<int>(a, b);
	cout << " a: " << a << " b: " << b << endl;
}
int main(void)
{
	test01();
	return 0;
}