#include<iostream>
#include<stack>
using namespace std;


//栈不允许有遍历行为
//栈可以判断容器为空，栈可以返回元素个数
//栈常用的对外接口

void test01() {
	//特点：符合先进后出的数据结构

	stack<int> s;

	//入栈

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//查看栈顶，出栈

	std::cout << "栈的大小" << s.size() << endl;

	while (!s.empty()) {

		std::cout << "栈顶元素为： " << s.top() << endl;

		//出栈
		s.pop();
	}
	std::cout << "栈的大小" << s.size() << endl;



}

int main()
{
	test01();
	system("pause");
	return 0;
}