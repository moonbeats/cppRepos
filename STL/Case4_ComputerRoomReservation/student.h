#pragma once
#include<iostream>
#include<fstream>
#include<vector>
#include"Identity.h"
#include"computerRoom.h"
#include"globalFile.h"
#include"orderFile.h"
using namespace std;
class Student :public Identity
{
public:
	Student();
	Student(int id, string name, string pwd);
	virtual void operMenu();

	//����ԤԼ
	void applyOrder();
	//�鿴�ҵ�ԤԼ
	void showMyOrder();
	//�鿴����ԤԼ
	void showAllOrder();
	//ȡ��ԤԼ
	void cancelOrder();

	//ѧ��ѧ��
	int m_Id;

	//��������
	vector<ComputerRoom> vCom;

};