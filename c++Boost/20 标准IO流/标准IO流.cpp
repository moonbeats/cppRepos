#include<iostream>
#include<iomanip>
using namespace std;
#if 0
cout;
cin;
clog;
cerr;
#endif

//��׼������ cin.get()
void test01()
{
	char ch;
	while (ch = cin.get()!= EOF)
	{
		cout << ch << endl;
	}
	//cin.get
	char ch2;
	cin.get(ch2);//��ȡһ���ַ�

	 
}

void test02()
{
	char ch;
	cin.get(ch);
	cout << ch << endl;
	cin.ignore(2);//���Ե�ǰ�ַ����ӻ�����ȡ��
	cin.get(ch);
	cout << ch << endl;
}

//cin.peek()
void test03() {
	cout << "���������ֻ��ַ���:" << endl;
	char ch;
	ch = cin.peek();
	if (ch >= '0' && ch <= '9')
	{
		int number;
		cin >> number;
		cout << "�������������:" << number << endl;
	}
	else
	{
		char buf[256] = { 0 };
		cin >> buf;
		cout << "����������ַ���:" << buf << endl;
	}

}
//��׼�����
void test04()
{
	cout << "hello world"<<endl;
	//cout.flush();
	cout.put('h').put('r').put('l') << endl;
	cout.write("Hello Zhaosi!",strlen("Hello Zhaosi!"));


}

//��ʽ�����
void test05()
{
	//��Ա�����ķ�ʽ
	int number = 10;
	cout << number << endl;
	cout.unsetf(ios::dec);//ж�ص�ǰĬ�ϵ�10���������ʽ
	cout.setf(ios::oct);
	cout.setf(ios::showbase);
	cout << number << endl;
	cout.unsetf(ios::oct);//ж�ص�ǰĬ�ϵ�8���������ʽ
	cout.setf(ios::hex);
	cout << number << endl;

	cout.width(10);
	cout.fill('*');
	cout.setf(ios::left);
	cout << number << endl;

	



}

void test06(){
	//ͨ�����Ʒ�
	int number2 = 10;
	cout << hex
		<< setiosflags(ios::showbase)
		<< setw(10)
		<< setfill('~')
		<< setiosflags(ios::left)
		<< number2
		<< endl;
}
int main(void)
{
	test06();
	return 0;
}