#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

void func01()
{
	throw 1;//�׳�int�����쳣
}
void test01()
{
	try {
		func01();
	}
	catch (int e)
	{
		cout << "�쳣����" << endl;
	}
}

void func02()
{
	throw "exception";//�׳�char *�����쳣
}
void test02()
{
	try
	{
		func02();
	}
	catch (const char* e)
	{
		cout << "�쳣����" << e << endl;
	}
}


class MyException {
public:
	MyException(const char* str)
	{
		cout << "���캯��" << endl;
		error = new char[strlen(str) + 1];
		strcpy(error, str);
	}
	MyException(const MyException& ex)
	{
		cout << "��������" << endl;
		this->error = new char[strlen(ex.error) + 1];
		strcpy(this->error, ex.error);
	}
	MyException& operator=(const MyException& ex) 
	{
		if (this->error != nullptr)
		{
			delete[] this->error;
			this->error = nullptr;
		}
		this->error = new char[strlen(ex.error) + 1];
		strcpy(this->error, ex.error);

	}

	void what() {
		cout << error << endl;
	}
	~MyException()
	{
		cout << "��������" << endl;
		if (error != nullptr)
		{
			delete[] error;
		}
	}

public:
	char* error;
};
void func03() {
	
	//throw MyException(const_cast<char*>("MyException));//cosnt_cast ǿתΪ��const
	//throw &(MyException("MyException"));//������������ָ��
	//throw new MyException("MyException");//ָ��
	throw MyException("MyException");//��������������ͨԪ�أ����ã�
}
void test03()
{
	try {
		func03();
	}
	catch (MyException& e)
	{
		e.what();
	}
}
int main(void)
{
	test03();
	return 0;
}