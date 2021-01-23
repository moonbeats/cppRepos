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

	//申请预约
	void applyOrder();
	//查看我的预约
	void showMyOrder();
	//查看所有预约
	void showAllOrder();
	//取消预约
	void cancelOrder();

	//学生学号
	int m_Id;

	//机房容器
	vector<ComputerRoom> vCom;

};