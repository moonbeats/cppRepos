#include<iostream>
using namespace std;
#include<string>
//string �����滻
//����
void test01()
{
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "δ�ҵ��ַ���" << endl;
	}
	cout << pos << endl;

	//rfind ��find������find�������� rfind��������
	pos = str1.rfind("de");
	cout << "pos=" << pos << endl;

	


	
}
//�滻
void test02()
{
	string str1 = "abcedfg";
	//��1��λ����3���ַ��滻Ϊ1111
	str1.replace(1, 3, "1111");
	cout << str1 << endl;
}

int main()
{
	test02();
	system("pause");
	return 0;
}