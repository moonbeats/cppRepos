#include<iostream>
using namespace std;
#include<set>

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

}
//1 ����set����
void test01() {

	set<int> s1;
	s1.insert(50);
	s1.insert(30);
	s1.insert(20);
	s1.insert(10);

	printSet(s1);

	set<int> s2(s1);
	printSet(s2);

	

}

//2 set�����Ĵ�С�ͽ���������������ָ����С

void test02() {

	//��С
	set<int> s1;
	s1.insert(50);
	s1.insert(30);
	s1.insert(20);
	s1.insert(10);

	if (s1.empty()) {
		cout << "s1Ϊ��" << endl;
	}
	else {
		cout << "s1��Ϊ��" << endl;
		cout << "s1�Ĵ�СΪ��" << s1.size() << endl;
	}
	
	//����

	set<int> s2;
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	s2.insert(400);
	cout << "����ǰ��" << endl;
	printSet(s1);
	printSet(s2);

	s1.swap(s2);
	cout << "������" << endl;
	printSet(s1);
	printSet(s2);

}

//3 set�����Ĳ����ɾ��

void test03() {
	//����
	set<int> s1;
	s1.insert(50);
	s1.insert(30);
	s1.insert(20);
	s1.insert(10);
	printSet(s1);
	//ɾ��

	s1.erase(s1.begin());
	printSet(s1);

	//ɾ�����ذ汾
	s1.erase(30);
	printSet(s1);
	//��ղ���
	s1.erase(s1.begin(), s1.end());
	printSet(s1);

}

//4 set�������Һ�ͳ��
void test04() {
	//find(key)
	set<int> s1;
	s1.insert(50);
	s1.insert(30);
	s1.insert(20);
	s1.insert(10);
	printSet(s1);

	set<int>::iterator pos =s1.find(20);
	if (pos != s1.end())
	{
		cout << "�ҵ�Ԫ�أ�" << *pos << endl;
	}
	else
	{
		cout << "δ�ҵ�Ԫ�أ�" << endl;
	}

	//count(key)(0/1)

	int num = s1.count(30);
	cout << "num = " << num << endl;


}

// 5 set ��multiset������

void test05() {

	set<int> s;
	pair<set<int>::iterator,bool> ret = s.insert(10);
	if (ret.second)
	{
		cout << "��һ�β���ɹ�" << endl;
	}
	else {
		cout << "��һ�β���ʧ��" << endl;
	}
	 ret = s.insert(10);
	if (ret.second)
	{
		cout << "�ڶ��β���ɹ�" << endl;
	}
	else {
		cout << "�ڶ��β���ʧ��" << endl;
	}
	printSet(s);

	multiset<int> ms;
	ms.insert(10);
	ms.insert(10);

	for (multiset<int> ::iterator it = ms.begin(); it != ms.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;


}

//set�������򣨷º�����

class MyCompare {
public:
	bool operator()(const int &v1,const int &v2) const
	{
		return v1 > v2;

	}
};
void test06(){
	set<int> s1;
	s1.insert(10);
	s1.insert(40);
	s1.insert(50);
	s1.insert(20);
	s1.insert(30);

	printSet(s1);

	//ָ���������Ϊ�Ӵ�С
	set<int,MyCompare> s2;
	s2.insert(10);
	s2.insert(40);
	s2.insert(50);
	s2.insert(20);
	s2.insert(30);
	for (set<int,MyCompare>::iterator it = s2.begin(); it != s2.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

}




int main() {


	//test01();
	//test02();
	//test03();
	//test04();
	//test05();
	test06();
	system("pause");
	return 0;
}