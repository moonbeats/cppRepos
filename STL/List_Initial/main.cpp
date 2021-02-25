#include<iostream>
using namespace std;
#include<list>

void printList(const list<int>& L) {
	for (list<int> ::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << (*it) << " ";
	}

	cout << endl;
}

//List���캯��
void test01()
{
	list<int> L1;//Ĭ�Ϲ���
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);

	printList(L1);

	//���乹��

	list<int> L2(L1.begin(), L1.end());
	printList(L2);

	//��������
	list<int> L3(L2);
	printList(L3);

	//n��elem
	list<int> L4(10,10000);
	printList(L4);

}

//list��ֵ�ͽ���

void test02() {
	//��ֵ
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

	//����


	list<int> L5;
	L5.assign(10, 100);
	cout << "����ǰ��" << endl;
	printList(L1);
	printList(L5);
	L1.swap(L5);
	cout << "������" << endl;
	printList(L1);
	printList(L5);
}

//list��С����

void test03(){

	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	printList(L1);

	if (L1.empty())
	{
		cout << "L1Ϊ��" << endl;
	}
	else
	{
		cout << "L1��Ϊ��" << endl;
		cout << "L1��Ԫ�ظ���Ϊ��" << L1.size() << endl;

	}
	L1.resize(10,10000);
	printList(L1);

	L1.resize(2);
	printList(L1);



}

//list�����еķ�ת������
//reverse()��ת
//sort()����
bool myCompare(int v1,int v2) {
	//����

	return v1 > v2;


}
void test04() {
	list<int> L1;
	L1.push_back(10);
	L1.push_back(20);
	L1.push_back(30);
	L1.push_back(40);
	//����
	cout << "����ǰ��" << endl;
	printList(L1);
	//���Բ�֧��������ʵĵ�������������������ʹ�ñ�׼�㷨
	//��֧��������ʵĵ��������������ڲ����ṩ��Ӧ��һЩ�㷨
	L1.sort();//��������
	//sort(L1.begin(),L1.end());
	cout << "�����" << endl;
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