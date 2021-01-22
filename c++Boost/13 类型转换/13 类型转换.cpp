#include<iostream>
using namespace std;

//类型检查
//1 static_cat 一般的类型转化
void test01()
{
	int a = 97;
	char c = static_cast<char>(a);
	cout << "a :" << a << "c:" << c << endl;
}
//2 dynamic_cat 通常在基类和派生类之间转换时使用
class Building{};
class Animal{};
class Cat:public Animal{};
void test02()
{
	//int* p = nullptr;
	//char* sp = static_cast<char*>(p);

	
}
//3 const_cast 主要针对const的转换
void test03()
{
	int a = 10;
	const int& b = a;
	int& c = const_cast<int&>(b);
	c = 100;
	cout << "C: " << c << endl;
}
//4 reinterpret_cast 用于没有任何关联之间的转换，比如一个字符指针转化为一个整型数

int main()
{
	test03();
	return 0;
}