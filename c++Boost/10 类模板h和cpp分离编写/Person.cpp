#include "Person.h"

//����ģ����Ҫ�������α��룬
//��û�����ɾ��庯����
//�����ڶ������������£����������Ҳ�������ʵ�ֺ����������Ϊ��û�б�����û�С����ɣ�
//��Ҫ���ݾ���ʹ�òŻ����ɾ��庯�������Ա���û���⡣
//����������ǰ���������еģ�ģ���ʵ�ַŵ�һ��#include"Person.hpp"
template<class T>
Person<T>::Person(T age) {
	this->age = age;
}

template<class T>
void Person<T>::Show() {
	cout << "age " << age << endl;
}