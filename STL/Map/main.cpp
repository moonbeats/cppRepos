#include<iostream>
#include<map>
using namespace std;
void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key = " << (*it).first << " value=" << it->second << endl;
	}
	cout << endl;
}

//1 map ��������͸�ֵ
void test01() {
	//����map����
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	printMap(m);

	//��������
	map<int, int> m2(m);
	printMap(m2);

	//��ֵ
	map<int, int> m3;
	m3 = m2;
	printMap(m3);

}

//2 map������С�ͽ���
void test02() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	printMap(m);

	cout << "size = " << m.size() << endl;
	cout << "is empty?" << m.empty() << endl;
	
	

	map<int, int> m2;
	m2.insert(pair<int, int>(1, 100));
	m2.insert(pair<int, int>(2, 200));
	m2.insert(pair<int, int>(3, 300));
	m2.insert(pair<int, int>(4, 400));
	cout << "����ǰ��" << endl;
	printMap(m);
	printMap(m2);
	m2.swap(m);
	cout << "������" << endl;
	printMap(m);
	printMap(m2);
}

//3 map�����Ĳ����ɾ��
//insert  erase clear
void test03() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;//������
	printMap(m);
}
//4map �������Һ�ͳ��
//find count

//5 map ��������
class MyCompare {
public:
	bool operator()(int v1, int v2) const 
	{
		return v1 > v2;
	}
};
void test04() {
	map<int, int,MyCompare> m;
	m.insert(make_pair(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(make_pair(3, 30));
	m.insert(make_pair(4, 40));
	m.insert(make_pair(5, 50));
	for (map<int, int,MyCompare>::iterator it = m.begin(); it != m.end(); it++) {
		cout << "key = " << (*it).first << " value=" << it->second << endl;
	}
	cout << endl;


}
int main() {


	//test01();
	//test02();
	//test03();
	test04();
	system("pause");
	return 0;
}