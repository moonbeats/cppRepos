#include<iostream>
using namespace std;

int divide(int x, int y)
{
	if (y == 0)
	{
		throw y;
	}
}

void test01()
{
	try {
		divide(1, 0);
	}
	catch (int e)
	{
		cout << "����Ϊ�� " << e << endl;
	}
}
void callDivide(int x, int y)
{
	divide(x, y);
}
void test02()
{
	try {
		callDivide(1, 0);
	}
	catch (int e)
	{
		cout << "testo2�ĳ���Ϊ��" << e << endl;
	}
}

int main()
{
	test01();
	test02();
	return 0;
}

