#include"speechManager.h"
#include<iostream>
#include<string>
#include<algorithm>
#include<deque>
#include<functional>
#include<numeric>
#include<fstream>
using namespace std;



SpeechManager::SpeechManager() {
	//��ʼ������������
	this->initSpeech();
	//����12��ѡ��
	this->createSpeaker();
	//�鿴�����¼
	this->loadRecord();

}


void SpeechManager::show_Menu() {
	cout << "*******************************************" << endl;
	cout << "*************��ӭ�μ��ݽ�����**************" << endl;
	cout << "***************1.��ʼ�ݽ�����**************" << endl;
	cout << "***************2.�鿴�����¼**************" << endl;
	cout << "***************3.��ձ�����¼**************" << endl;
	cout << "***************0.�˳���������**************" << endl;
	cout << "*******************************************" << endl;
	cout << endl;
}


void SpeechManager::exitSystem() {
	cout << "��ӭ�´�ʹ�ã�" << endl;
	system("pause");
	exit(0);
}


void SpeechManager::initSpeech() {
	this->v1.clear();
	this->v2.clear();
	this->vVictory.clear();
	this->m_Speaker.clear();

	//��ʼ����������
	this->m_Index = 1;
	
	this->m_Record.clear();
}


void SpeechManager::createSpeaker() {
	string nameSeed = "ABCEDFGHIJKL";
	for (int i = 0; i < nameSeed.size(); i++) {

		string name = "ѡ��";
		name += nameSeed[i];

		Speaker sp;
		sp.m_Name = name;

		for (int j = 0; j < 2; j++)
		{
			sp.m_Score[j] = 0;
		}

		//����ѡ�ֱ�ţ����ҷ�������v1��
		this->v1.push_back(i + 10001);
		this->m_Speaker.insert(make_pair(i + 10001, sp));
	}

}


void SpeechManager::startSpeech() {
	//��һ��
	//1��ǩ
	this->speechDraw();

	//2����
	this->speechContest();

	//3��ʾ���ս��
	this->showScore();

	//�ڶ���
	this->m_Index++;
	//1��ǩ
	this->speechDraw();

	//2����
	this->speechContest();

	//3��ʾ���ս��
	this->showScore();

	//4����������ļ���
	this->saveRecord();

	//��ʼ������������
	this->initSpeech();

	//����12��ѡ��
	this->createSpeaker();

	//�鿴�����¼
	this->loadRecord();

	cout << "���������ϣ�" << endl;
	system("pause");
	system("cls");
}


void SpeechManager::speechDraw() {

	cout << "��<<" << this->m_Index << ">>�ֵ�ѡ�����ڳ�ǩ" << endl;
	cout << "------------------------------------------" << endl;
	cout << "��ǩ����ݽ�˳������: " << endl;

	if (this->m_Index == 1) {
		//��һ�ֱ���

		random_shuffle(v1.begin(), v1.end());
		for (vector<int>::iterator it = v1.begin(); it != v1.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;
	}
	else {
		//�ڶ��ֱ���
		random_shuffle(v2.begin(), v2.end());
		for (vector<int>::iterator it = v2.begin(); it != v2.end(); it++) {
			cout << *it << " ";
		}
		cout << endl;

	}

	cout << "------------------------------------------" << endl;
	system("pause");
}


void SpeechManager::speechContest() {

	cout << "----------------��" << this->m_Index << "�ֱ�����ʽ��ʼ--------------" << endl;
	//׼����ʱ���� ���С��ɼ�

	multimap<double, int, greater<double>> groupScore;

	int num = 0;//��¼��Ա���� 6
	
	vector<int>v_Src;//����ѡ������

	if (this->m_Index == 1)
	{
		v_Src = v1;
	}
	else
	{
		v_Src = v2;
	}
	for (vector<int>::iterator it = v_Src.begin(); it != v_Src.end(); it++) {
		num++;
		//10����ί���
		deque<double> d;
		for (int i = 0; i < 10; i++) {
			double score = (rand() % 401 + 600) / 10.f;
			//cout << score << " ";
			d.push_back(score);
		}
		//cout << endl;
		sort(d.begin(), d.end(), greater<double>());
		d.pop_back();
		d.pop_front();

		double sum = accumulate(d.begin(), d.end(), 0);
		double avg = sum / double(d.size());//ƽ����

		//��ƽ���ַ���map������
		this->m_Speaker[*it].m_Score[m_Index - 1] = avg;

		//��������ݷ�����ʱ����
		groupScore.insert(make_pair(avg, *it));
		if (num % 6 == 0) {
			cout << "��" << num / 6 << "С���������" << endl;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end(); it++) {
				cout << "��ţ� " << it->second << " ������ " << this->m_Speaker[it->second].m_Name << "  �ɼ��� " <<
					m_Speaker[it->second].m_Score[this->m_Index - 1] << endl;

			}
			//ȡ��ǰ����
			int count = 0;
			for (multimap<double, int, greater<double>>::iterator it = groupScore.begin(); it != groupScore.end()&&count<3; it++,count++) {
				if (this->m_Index == 1) {
					v2.push_back((*it).second);
				}
				else {
					vVictory.push_back((*it).second);
				}
			}

			groupScore.clear();
			cout << endl;
		}
	}
	cout << "----------------------------��" << this->m_Index << "�ֱ������------------------------" << endl;
	system("pause");
}


void SpeechManager::showScore() {
	cout << "-------------��" << this->m_Index << "�ֽ�����ѡ����Ϣ����-------------";
	cout << endl;
	vector<int> v;
	if (this->m_Index == 1) {
		v = v1;
	}
	else
	{
		v = vVictory;
	}

	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << "ѡ�ֱ��" << *it << "  ����:" << this->m_Speaker[*it].m_Name << " ������ " <<
			this->m_Speaker[*it].m_Score[this->m_Index - 1] << endl;

	}
	cout << endl;
	system("pause");
	system("cls");
	this->show_Menu();
}


void SpeechManager::saveRecord() {
	ofstream ofs;
	ofs.open("speech.csv", ios::out | ios::app);
	//��ÿ��ѡ�ֵ�����д���ļ�
	for (vector<int>::iterator it = vVictory.begin(); it != vVictory.end(); it++) {
		ofs << *it << "," << this->m_Speaker[*it].m_Score[1] << ",";
	}
	ofs << endl;
	

	//�ر��ļ�
	ofs.close();
	cout << "��¼���Ѿ�����" << endl;

	//�����ļ���Ϊ�յ�״̬
	this->fileISempty = false;

}


void SpeechManager::loadRecord() {
	ifstream ifs("speech.csv", ios::in);
	if(!ifs.is_open())
	{
		this->fileISempty = true;
		//cout << "�ļ�������" << endl;
		ifs.close();
		return;
	}


	//�ļ����
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�Ϊ��" << endl;
		this->fileISempty = true;
		ifs.close();
		return;
	}

	//�ļ�������
	this->fileISempty = false;
	ifs.putback(ch);

	string data;
	int index = 0;
	while (ifs >> data)
	{
		//cout << data << endl;
		//10002,86,2315,25
		vector<string> v;//���6��string���ַ���
		int pos = -1;//�鵽����λ�õı���
		int start = 0;
		while (true) {

			pos = data.find(",", start);
			if (pos == -1)
			{
				break;

			}
			else {
				string temp = data.substr(start, pos - start);
				//cout << temp << endl;
				v.push_back(temp);
				start = pos + 1;
			}
		}

		this->m_Record.insert(make_pair(index, v));
		index++;
	}

	ifs.close();

	//for (map<int, vector<string>>::iterator it = m_Record.begin(); it != m_Record.end(); it++) {
	//	cout << it->first << "�ھ���ţ� " << it->second[0] << "����: " << it->second[1] << endl;
	//}


}


void SpeechManager::showRecord() {
	if (this->fileISempty)
	{
		cout << "�ļ�Ϊ�ջ򲻴���" << endl;
	}
	else {
		for (int i = 0; i < this->m_Record.size(); i++) {
			cout << "��" << i + 1 << "��"
				<< "�ھ���ţ�" << this->m_Record[i][0] << " �÷�: " << this->m_Record[i][1] << " "
				<< "�Ǿ���ţ�" << this->m_Record[i][2] << " �÷�: " << this->m_Record[i][3] << " "
				<< "������ţ�" << this->m_Record[i][4] << " �÷�: " << this->m_Record[i][5] << " " << endl;
		}
	}
	system("pause");
	system("cls");

}


void SpeechManager::clearRecord() {
	cout << "�Ƿ�ȷ������ļ�?" << endl;
	cout << "1����" << endl;
	cout << "2����" << endl;
	int select = 0;
	cin >> select;

	if (select == 1)
	{
		//ȷ�����
		ofstream ofs("speech.csv", ios::trunc);
		ofs.close();
		//��ʼ������������
		this->initSpeech();
		//����12��ѡ��
		this->createSpeaker();
		//�鿴�����¼
		this->loadRecord();
		cout << "��ճɹ�!" << endl;

	}
	else {
		system("pause");
		system("cls");
	}
} 


SpeechManager::~SpeechManager() {

}