#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;



//ģ��Ĳ�������һһ��Ӧ
template<class T>
int myAdd(const T& a, const T& b)
{
	cout << "ģ�庯��" << endl;
	return a + b;
}

int myAdd(const int& a, const int& b)
{
	cout << "��ģ�庯��" << endl;
	return a + b;
}

//ģ�庯����������
template<class T>
void print(T a, T b){}

template<class T>
void print(T a){}

void test02()
{
	int a = 10;
	int b = 20;
	char c1 = 'a';
	char c2 = 'b';
	myAdd(a, c1);
	myAdd(a, b);
	myAdd(c1, b);
	myAdd<int>(a, b);
	myAdd<char>(c1, c2);

}

int main(void)
{
	test02();
	system("pause");
	return 0;
}

