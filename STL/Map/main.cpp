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

//1 map 容器构造和赋值
void test01() {
	//创建map容器
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(3, 30));
	m.insert(pair<int, int>(4, 40));
	printMap(m);

	//拷贝构造
	map<int, int> m2(m);
	printMap(m2);

	//赋值
	map<int, int> m3;
	m3 = m2;
	printMap(m3);

}

//2 map容器大小和交换
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
	cout << "交换前：" << endl;
	printMap(m);
	printMap(m2);
	m2.swap(m);
	cout << "交换后：" << endl;
	printMap(m);
	printMap(m2);
}

//3 map容器的插入和删除
//insert  erase clear
void test03() {
	map<int, int> m;
	m.insert(pair<int, int>(1, 10));
	m.insert(make_pair(2, 20));
	m.insert(map<int, int>::value_type(3, 30));
	m[4] = 40;//不建议
	printMap(m);
}
//4map 容器查找和统计
//find count

//5 map 容器排序
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