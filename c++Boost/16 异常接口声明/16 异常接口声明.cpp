#include<iostream>

using namespace std;


//�������ֻ���׳�intfloat ,char ���������͵��쳣���׳������ľͻᱨ��
void func() throw(int, float, char) {
	throw "abc";
}

void func02() throw() //�κ����Ͷ������׳�
{
	throw - 1;
}

void func03() throw() //�����׳��κ����͵��쳣
{
	throw - 1;
}

int main()
{

	try {
		func();
	}
	catch (char* str) {
		cout << str << endl;
	}
	catch (int e) {
		cout << "�쳣" << endl;
	}
	catch (...) {//���������쳣
		cout << "δ֪�쳣" << endl;
	}
	return 0;
}