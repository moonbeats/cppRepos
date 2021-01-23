#include<iostream>
#include<map>
#include<vector>
#include<string>
#include<ctime>
using namespace std;

#define CEHUA 0
#define MEISHU 1
#define YANFA 2
//公司招聘10个员工（ABCDEFGHIJ），10名员工进入公司后，
//指派员工在哪个部门工作
//随机给10名员工分配工资
//通过multimap进入信息的插入
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
		worker.m_Name = "员工";
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
	cout << "策划部门：" << endl;
	multimap<int,Worker>::iterator  pos = m.find(CEHUA);
	int count = m.count(CEHUA);
	int index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "姓名: " << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
	}
	cout << "---------------------------"<<endl;
	cout << "美术部门：" << endl;
	pos = m.find(MEISHU);
	count = m.count(MEISHU);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "姓名: " << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
	}

	cout << "---------------------------" << endl;
	cout << "研发部门：" << endl;
	pos = m.find(YANFA);
	count = m.count(YANFA);
	index = 0;
	for (; pos != m.end() && index < count; pos++, index++) {
		cout << "姓名: " << pos->second.m_Name << "工资：" << pos->second.m_Salary << endl;
	}

}
int main() {

	srand((unsigned int)time(NULL));
	//1 创建10个员工，放到vector中
	vector<Worker> vWorker;
	createWorker(vWorker);

	//for (vector<Worker>::iterator it = vWorker.begin(); it != vWorker.end(); it++) {
	//	cout << "姓名： " << it->m_Name << " 工资：" << it->m_Salary << endl;
	//}

	//2 员工分组
	multimap<int, Worker> mWorker;
	setGroup(vWorker,mWorker);

	//3 分组显示员工
	showWorkerGroup(mWorker);

	system("pause");
	return 0;


}

