#pragma once
#include<iostream>
#include <fstream>
#include<vector>
#include<algorithm>
#include "identity.h"
#include"teacher.h"
#include"student.h"
#include"globalFile.h"
#include"computerRoom.h"
using namespace std;

class Manager :public Identity
{
public:

	//Ĭ�Ϲ���
	Manager();

	//�вι���  ����Ա����������
	Manager(string name, string pwd);

	//ѡ��˵�
	virtual void operMenu();

	//����˺�  
	void addPerson();

	//�鿴�˺�
	void showPerson();

	//�鿴������Ϣ
	void showComputer();

	//���ԤԼ��¼
	void cleanFile();

	//��ʼ������
	void initVector();

	//ѧ������
	vector<Student> vStu;

	//��ʦ����
	vector<Teacher> vTea;

	//������Ϣ����
	vector<ComputerRoom> vCom;

	//����ظ� ����1 �����ID ����2 ���������
	bool checkRepeat(int id, int type);

};
