#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;
template <class T>
class Person
{
public:
	Person(T id,T age):mID(id),mAge(age){}

	void show()
	{
		cout << "ID: " << mID << " Age:" << mAge << endl;
	}

private:
	T mID;
	T mAge;
};

void test01()
{
	Person<int> p(10, 20);
	p.show();
}

int main(void)
{
	test01();
	system("pause");
	return 0;
}