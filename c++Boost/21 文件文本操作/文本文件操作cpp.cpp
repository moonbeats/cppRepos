#include<iostream>
using namespace std;

#include<fstream>
//文本文件读写
void test01()
{
	const char* fileName = "D:\\cppRepos\\c++Boost\\21 文件文本操作\\source.txt";
	const char* targetName = "D:\\cppRepos\\c++Boost\\21 文件文本操作\\target.txt";
	//ifstream ism(fileName,ios::in);//只读方式打开文件
	ofstream osm(targetName, ios::out|ios::app);//
	ifstream ism;
	ism.open(fileName, ios::in);

	if (!ism)
	{
		cout << "打开文件失败！" << endl;
		return;
	}

	//读文件
	char ch;
	while (ism.get(ch))
	{
		cout << ch;
		osm.put(ch);
	}
	//关闭文件
	ism.close();
	osm.close();

}

int main()
{
	test01();
	return 0;
}