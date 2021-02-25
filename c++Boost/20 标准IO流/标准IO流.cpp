#include<iostream>
#include<iomanip>
using namespace std;
#if 0
cout;
cin;
clog;
cerr;
#endif

//标准输入流 cin.get()
void test01()
{
	char ch;
	while (ch = cin.get()!= EOF)
	{
		cout << ch << endl;
	}
	//cin.get
	char ch2;
	cin.get(ch2);//读取一个字符

	 
}

void test02()
{
	char ch;
	cin.get(ch);
	cout << ch << endl;
	cin.ignore(2);//忽略当前字符，从缓存区取走
	cin.get(ch);
	cout << ch << endl;
}

//cin.peek()
void test03() {
	cout << "请输入数字或字符串:" << endl;
	char ch;
	ch = cin.peek();
	if (ch >= '0' && ch <= '9')
	{
		int number;
		cin >> number;
		cout << "您输入的是数字:" << number << endl;
	}
	else
	{
		char buf[256] = { 0 };
		cin >> buf;
		cout << "您输入的是字符串:" << buf << endl;
	}

}
//标准输出流
void test04()
{
	cout << "hello world"<<endl;
	//cout.flush();
	cout.put('h').put('r').put('l') << endl;
	cout.write("Hello Zhaosi!",strlen("Hello Zhaosi!"));


}

//格式化输出
void test05()
{
	//成员方法的方式
	int number = 10;
	cout << number << endl;
	cout.unsetf(ios::dec);//卸载当前默认的10进制输出方式
	cout.setf(ios::oct);
	cout.setf(ios::showbase);
	cout << number << endl;
	cout.unsetf(ios::oct);//卸载当前默认的8进制输出方式
	cout.setf(ios::hex);
	cout << number << endl;

	cout.width(10);
	cout.fill('*');
	cout.setf(ios::left);
	cout << number << endl;

	



}

void test06(){
	//通过控制符
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