#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

template <class T>
class Animal {
public:
	void makeSound() {
		cout << mAge << "  岁的动物在叫来，叫去的。。。" << endl;
	}
public:
	T mAge;
};

template<class T>
class Cat :public Animal<T>
{

public:
	Cat(int age) :mAge(age) {}
	void makeSound() {
		cout << mAge << "岁猫在叫！" << endl;
	}

public:
	T mAge;

};

int main(void) {
	Cat<int> cat(10);

	cat.makeSound();

	return 0;
}