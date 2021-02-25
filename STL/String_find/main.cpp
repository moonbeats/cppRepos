#include<iostream>
using namespace std;
#include<string>
//string 查找替换
//查找
void test01()
{
	string str1 = "abcdefgde";
	int pos = str1.find("de");
	if (pos == -1)
	{
		cout << "未找到字符串" << endl;
	}
	cout << pos << endl;

	//rfind 和find的区别（find从左往右 rfind从右往左）
	pos = str1.rfind("de");
	cout << "pos=" << pos << endl;

	


	
}
//替换
void test02()
{
	string str1 = "abcedfg";
	//从1号位置起3个字符替换为1111
	str1.replace(1, 3, "1111");
	cout << str1 << endl;
}

int main()
{
	test02();
	system("pause");
	return 0;
}