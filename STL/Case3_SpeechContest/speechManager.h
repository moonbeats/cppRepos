#pragma once
#include<iostream>
#include<vector>
#include<map>
#include"speaker.h"
using namespace std;
//����ݽ�����������
class SpeechManager
{
public:
	//���캯��
	SpeechManager();

	//�˵�����
	void show_Menu();

	//�˳�ϵͳ
	void exitSystem();

	//��������
	~SpeechManager();

	//��ʼ������������
	void initSpeech();

	//����12��ѡ��
	void createSpeaker();

	//��ʼ����
	void startSpeech();

	//��ǩ
	void speechDraw();
	
	//����
	void speechContest();

	//��ʾ��������
	void showScore();

	//�������
	void saveRecord();

	//��ȡ��¼
	void loadRecord();

	//��ʾ����÷�
	void showRecord();

	//��ռ�¼
	void clearRecord();

	//�ж��ļ��Ƿ�Ϊ��
	bool fileISempty;

	//��������¼������
	map<int, vector<string>>m_Record;


	//��Ա����
	//�����һ��ѡ�ֱ������
	vector<int> v1;

	//��һ�ֽ���ѡ�ֱ������
	vector<int> v2;
	
	//ʤ����ǰ����ѡ�ֱ������
	vector<int> vVictory;

	//��ű���Լ�����ѡ������
	map<int, Speaker> m_Speaker;

	//��ű�������
	int m_Index;
};


