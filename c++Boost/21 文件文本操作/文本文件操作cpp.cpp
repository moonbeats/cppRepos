#include<iostream>
using namespace std;

#include<fstream>
//�ı��ļ���д
void test01()
{
	const char* fileName = "D:\\cppRepos\\c++Boost\\21 �ļ��ı�����\\source.txt";
	const char* targetName = "D:\\cppRepos\\c++Boost\\21 �ļ��ı�����\\target.txt";
	//ifstream ism(fileName,ios::in);//ֻ����ʽ���ļ�
	ofstream osm(targetName, ios::out|ios::app);//
	ifstream ism;
	ism.open(fileName, ios::in);

	if (!ism)
	{
		cout << "���ļ�ʧ�ܣ�" << endl;
		return;
	}

	//���ļ�
	char ch;
	while (ism.get(ch))
	{
		cout << ch;
		osm.put(ch);
	}
	//�ر��ļ�
	ism.close();
	osm.close();

}

int main()
{
	test01();
	return 0;
}