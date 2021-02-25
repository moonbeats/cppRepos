#define _CRT_SECURE_NO_WARNINGS
#include<iostream>

using namespace std;

void func01()
{
	throw 1;//抛出int类型异常
}
void test01()
{
	try {
		func01();
	}
	catch (int e)
	{
		cout << "异常捕获！" << endl;
	}
}

void func02()
{
	throw "exception";//抛出char *类型异常
}
void test02()
{
	try
	{
		func02();
	}
	catch (const char* e)
	{
		cout << "异常捕获！" << e << endl;
	}
}


class MyException {
public:
	MyException(const char* str)
	{
		cout << "构造函数" << endl;
		error = new char[strlen(str) + 1];
		strcpy(error, str);
	}
	MyException(const MyException& ex)
	{
		cout << "拷贝构造" << endl;
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
		cout << "析构函数" << endl;
		if (error != nullptr)
		{
			delete[] error;
		}
	}

public:
	char* error;
};
void func03() {
	
	//throw MyException(const_cast<char*>("MyException));//cosnt_cast 强转为非const
	//throw &(MyException("MyException"));//创建匿名对象，指针
	//throw new MyException("MyException");//指针
	throw MyException("MyException");//创建匿名对象（普通元素，引用）
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