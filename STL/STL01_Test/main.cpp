#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>

void myPrint(int val)
{
	cout << val << endl;
}
void test01() 
{
	//����vector����
	vector<int> v;
	//�������в�������
	v.push_back(10);
	v.push_back(20);
	v.push_back(30);
	v.push_back(40);
	////ͨ�����������������е�����
	//vector<int>::iterator itBegin = v.begin();//��ʼ��������ָ���һ��Ԫ��λ��
	//vector<int>::iterator itEnd = v.end();//��ʼ��������ָ�����һ����һ��Ԫ��λ��
	////��һ�ֱ���
	//while (itBegin != itEnd)
	//{
	//	cout << *itBegin << endl;
	//	itBegin++;

	//}

	//�ڶ��ֱ�����ʽ
	//for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	//{
	//	cout << *it << endl;
	//}
	//�����ֱ�����ʽ������stl���ṩ�ı����㷨
	for_each(v.begin(), v.end(), myPrint);
}

int main() {

	test01();
	system("pause");
}