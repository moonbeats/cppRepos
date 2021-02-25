#include<iostream>
using namespace std;
#include<string>
class MyAdd
{
public:
	int operator()(int v1, int v2)
	{
		return v1 + v2;
	}
};
class MyPrint
{
public:
	MyPrint() {
		this->count=0;
	}
	void operator()(string test)
	{
		cout << test << endl;
		this->count++;
	}

	int count;//内部自己的状态

};
void test01() {
	MyAdd myAdd;
	cout << myAdd(10, 10) << endl;
	
}

void test02() {
	MyPrint myPrint;
	myPrint("Hello World!");
	myPrint("Hello World!");
	myPrint("Hello World!");
	myPrint("Hello World!");
	cout << "myPrint调用次数为：" << myPrint.count << endl;
}

//函数对象可以作为参数传递
void doPrint(MyPrint& mp, string test) {
	mp(test);
}
void test03()
{
	MyPrint myPrint;
	doPrint(myPrint, "Hello C++");
}
int main() {
	//test01();
	//test02();
	test03();
	system("pause");
	return 0;
}