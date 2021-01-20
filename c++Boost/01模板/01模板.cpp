#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

//���ݽ���
void mySwap(int& a, int& b)
{
	int temp = a;
	a = b;
	b = temp;
}

//ģ�弼����ģ�����������д������Ժ��Ծ�������
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
	//1,�Զ������Ƶ�
	
	cout << " a: " << a << " b: " << b << endl;
	mySwap(a, b);
	cout << " a: " << a << " b: " << b << endl;
	//2,��ʾָ������
	mySwap<int>(a, b);
	cout << " a: " << a << " b: " << b << endl;
}
int main(void)
{
	test01();
	return 0;
}