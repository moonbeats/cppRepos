#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;


//#include"Person.h"
#include"Person.hpp"//��������,��ֹ�������⣬ ��cpp��Ϊhpp



int main(void) {

	//��������ȥ��ʵ�ְ�
	Person<int> p(10);//���캯�������ڵ�ǰ�ļ���û���ҵ���������Ϊ��������������ļ��б���(Person.hΪ����������ȥ���룩��
	//�������������ӵ�ʱ��ȥ�Һ���ʵ�ֵľ���λ�á�
	p.Show();
	return 0;
}