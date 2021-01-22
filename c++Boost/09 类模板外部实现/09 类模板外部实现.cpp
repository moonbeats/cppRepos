#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include<string>

using namespace std;

template<class T> class Person;
template<class T> void PrintPerson(Person <T>& p);

template<class T>
class Person {
public:
	//�������Ʋ�����
	template<class T>
	friend ostream& operator<< <T>(ostream& os, Person<T>& p); //<T> ���� ��linux������ �ſ���ͨ��


	//��ͨ��Ԫ����
	//template<class T>
	//friend void PrintPerson(Person <T> &p); //����д�����ڱ�ģ�linux�����£�Ҳ���ܱ��벻ͨ��
	template<class T>
	friend void PrintPerson<T>(Person <T>& p);////����д���ܺ���


	Person(T age, T id);
	void Show();

private:
	T mAge;
	T mID;
};

//��ģ����ⲿʵ��
template<class T>
Person<T>::Person(T age, T id)
{
	this->mID = id;
	this->mAge = age;
}

template<class T>
void Person<T>::Show() {
	cout << "age: " << mAge << " ID: " << mID << endl;
}

//�������Ʋ�����
template<class T>
ostream& operator<<(ostream& os, Person<T>& p) {
	os << "age: " << p.mAge << " ID: " << p.mID << endl;
	return os;
}
//��ͨ��Ԫ��ʵ��
template<class T>
void PrintPerson(Person <T>& p) {
	cout << "age: " << p.mAge << " ID: " << p.mID << endl;
}

//��Ҫ������Ԫ��������Σ�ա���������Ԫģ��
void tes01() {
	Person<int> p(10, 20);
	p.Show();

	//cout << p;  //�������Ʋ�����

	PrintPerson(p);

}
int main()
{
	tes01();
	return 0;
}