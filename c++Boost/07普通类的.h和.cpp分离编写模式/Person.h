#pragma once
#include<iostream>
#include<string>
/*
#ifndef PERSON_H  //ctrl + shift +U  ��дת��  C���� ����ֹͷ�ļ����ظ�����
#define PERSON_H
#endif // !PERSON_H  //ctrl + shift +U  ��дת��  C���� �� ��ֹͷ�ļ����ظ�����
*/

using namespace  std;

class Person {

public:
	Person(string name, int age);//ֻ������
	void Show();
public:
	string mName;
	int mAge;
};