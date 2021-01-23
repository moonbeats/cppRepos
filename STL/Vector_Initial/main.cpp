#include<iostream>
#include<vector>
using namespace std;


void printVector(vector<int>& v)
{
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}
//����һ��vector����
void test01()
{

	//�޲ι���
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}

	printVector(v1);
	
	//���乹��
	vector<int>v2(v1.begin(), v1.end());
	printVector(v2);
	//n��elem����

	vector<int> v3(10, 100);
	printVector(v3);

	//��������
	vector<int> v4(v3);
	printVector(v4);
}



int main()
{
	test01();
	system("pause");
	return 0;
}