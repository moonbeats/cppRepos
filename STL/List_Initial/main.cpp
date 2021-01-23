#include<iostream>
using namespace std;
#include<list>

void printList(const list<int>& L) {
	for (list<int> ::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << (*it) << " ";
	}

	cout << endl;
}

//List构造函数
void test01()
{
	list<int> L1;//默认构造
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	//区间构造

	list<int> L2(L1.begin(), L1.end());
	printList(L2);

	//拷贝构造
	list<int> L3(L2);
	printList(L3);

	//n个elem
	list<int> L4(10,10000);
	printList(L4);

}

//list赋值和交换

void test02() {
	//赋值
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	list<int> L2;
	L2 = L1;
	printList(L2);

	list<int> L3;
	L3.assign(L2.begin(), L2.end());
	printList(L3);

	list<int> L4;
	L4.assign(10, 100);
	printList(L4);

	//交换


	list<int> L5;
	L5.assign(10, 100);
	cout << "交换前：" << endl;
	printList(L1);
	printList(L5);
	L1.swap(L5);
	cout << "交换后：" << endl;
	printList(L1);
	printList(L5);
}

//list大小操作

void test03(){

	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	if (L1.empty())
	{
		cout << "L1为空" << endl;
	}
	else
	{
		cout << "L1不为空" << endl;
		cout << "L1的元素个数为：" << L1.size() << endl;

	}
	L1.resize(10,10000);
	printList(L1);

	L1.resize(2);
	printList(L1);



}

//list容器中的反转和排序
//reverse()反转
//sort()排序
bool myCompare(int v1,int v2) {
	//降序

	return v1 > v2;


}
void test04() {
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	//排序
	cout << "排序前：" << endl;
	printList(L1);
	//所以不支持随机访问的迭代器的容器，不可以使用标准算法
	//不支持随机访问的迭代器的容器，内部会提供对应的一些算法
	L1.sort();//升序排序
	//sort(L1.begin(),L1.end());
	cout << "排序后：" << endl;
	printList(L1);

	L1.sort(myCompare);
	printList(L1);

}



int main() {


	//test01();
	//test02();
	//test03();
	test04();
	system("pause");
	return 0;
}