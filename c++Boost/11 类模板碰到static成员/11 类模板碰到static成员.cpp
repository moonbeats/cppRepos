#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

template<class T>
class Person
{
public:
	static int a;
};

template<class T> int Person<T>::a = 0;

int main()
{
	Person<int> pi1, pi2, pi3;
	Person<char> pc1, pc2, pc3;

	pi1.a = 10;
	pc1.a = 10000;
	cout << pi1.a << " " << pi2.a << " " << pi3.a << endl;
	cout << pc1.a << " " << pc2.a << " " << pc3.a << endl;
	return 0;
}