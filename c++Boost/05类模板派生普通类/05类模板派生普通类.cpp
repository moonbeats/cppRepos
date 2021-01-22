#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

template<class T>
class Person
{
public:
	Person():mAge(0){}
private:
	T mAge;
};


class SubPerson:public Person<int>
{};

int main()
{
	return 0;
}