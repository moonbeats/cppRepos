#include<iostream>
using namespace std;

//���ͼ��
//1 static_cat һ�������ת��
void test01()
{
	int a = 97;
	char c = static_cast<char>(a);
	cout << "a :" << a << "c:" << c << endl;
}
//2 dynamic_cat ͨ���ڻ����������֮��ת��ʱʹ��
class Building{};
class Animal{};
class Cat:public Animal{};
void test02()
{
	//int* p = nullptr;
	//char* sp = static_cast<char*>(p);

	
}
//3 const_cast ��Ҫ���const��ת��
void test03()
{
	int a = 10;
	const int& b = a;
	int& c = const_cast<int&>(b);
	c = 100;
	cout << "C: " << c << endl;
}
//4 reinterpret_cast ����û���κι���֮���ת��������һ���ַ�ָ��ת��Ϊһ��������

int main()
{
	test03();
	return 0;
}