#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<ctime>
using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2
//��˾��Ƹ10��Ա����ABCDEFGHIJ����10��Ա�����빫˾��
//ָ��Ա�����ĸ����Ź���
//�����10��Ա�����乤��
//ͨ��multimap������Ϣ�Ĳ���
class Worker
{
public:
	string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker>&v) {

	string nameSeed = "ABCDEFGHIJ";
	for (int i = 0; i < 10; i++) {

		Worker worker;
		worker.m_Name = "Ա��";
		worker.m_Name += nameSeed[i];

		worker.m_Salary = rand() % 10000 + 10000;//10000-19999
		v.push_back(worker);


	}
}

void setGroup(vector<Worker>& v, multimap<int, Worker>& m) {
	for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++) {
		int deptId = rand() % 3;
		m.insert(make_pair(deptId, *it));
	}
}

void showWorkerGroup(multimap<int,Worker>&m) {
	cout << "�߻����ţ�" << endl;
	multimap<int,Worker>::iterator  pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "����: " << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}
	cout << "---------------------------"<<endl;
	cout << "�������ţ�" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "����: " << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}

	cout << "---------------------------" << endl;
	cout << "�з����ţ�" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "����: " << pos->second.m_Name << "���ʣ�" << pos->second.m_Salary << endl;
	}

}
int main() {

	srand((unsigned int)time(NULL));
	//1 ����10��Ա�����ŵ�vector��
	vector<Worker> vWorker;
	createWorker(vWorker);

	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++) {
	//	cout << "������ " << it->m_Name << " ���ʣ�" << it->m_Salary << endl;
	//}

	//2 Ա������
	multimap<int, Worker> mWorker;
	setGroup(vWorker,mWorker);

	//3 ������ʾԱ��
	showWorkerGroup(mWorker);

	system("pause");
	return 0;


}

