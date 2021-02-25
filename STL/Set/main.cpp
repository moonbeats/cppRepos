#include<iostream>
using namespace std;
#include<set>

void printSet(set<int>& s) {
	for (set<int>::iterator it = s.begin(); it != s.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;

}
//1 构造set容器
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

//2 set容器的大小和交换，不允许重新指定大小

void test02() {

	//大小
	set<int> s1;
	s1.insert(50);
	s1.insert(30);
	s1.insert(20);
	s1.insert(10);

	if (s1.empty()) {
		cout << "s1为空" << endl;
	}
	else {
		cout << "s1不为空" << endl;
		cout << "s1的大小为：" << s1.size() << endl;
	}
	
	//交换

	set<int> s2;
	s2.insert(100);
	s2.insert(200);
	s2.insert(300);
	s2.insert(400);
	cout << "交换前：" << endl;
	printSet(s1);
	printSet(s2);

	s1.swap(s2);
	cout << "交换后" << endl;
	printSet(s1);
	printSet(s2);

}

//3 set容器的插入和删除

void test03() {
	//插入
	set<int> s1;
	s1.insert(50);
	s1.insert(30);
	s1.insert(20);
	s1.insert(10);
	printSet(s1);
	//删除

	s1.erase(s1.begin());
	printSet(s1);

	//删除重载版本
	s1.erase(30);
	printSet(s1);
	//清空操作
	s1.erase(s1.begin(), s1.end());
	printSet(s1);

}

//4 set容器查找和统计
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
		cout << "找到元素：" << *pos << endl;
	}
	else
	{
		cout << "未找到元素：" << endl;
	}

	//count(key)(0/1)

	int num = s1.count(30);
	cout << "num = " << num << endl;


}

// 5 set 和multiset的区别

void test05() {

	set<int> s;
	pair<set<int>::iterator,bool> ret = s.insert(10);
	if (ret.second)
	{
		cout << "第一次插入成功" << endl;
	}
	else {
		cout << "第一次插入失败" << endl;
	}
	 ret = s.insert(10);
	if (ret.second)
	{
		cout << "第二次插入成功" << endl;
	}
	else {
		cout << "第二次插入失败" << endl;
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

//set容器排序（仿函数）

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

	//指定排序规则为从大到小
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