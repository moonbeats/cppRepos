#include<iostream>
using namespace std;
#include<unordered_set>


void test01()
{
	unordered_set<char> hashTabel;
	string str = "absffdaaabb";
	for (int i = 0; i < str.length(); ++i)
	{
		char ch = str[i];

		hashTabel.insert(ch);
	}
	cout << "size of hashTabel:" << hashTabel.size() << endl;
}

int main()
{

	test01();
	system("pause");
	return 0;
}