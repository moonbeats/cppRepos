#include<iostream>
#include<stack>
using namespace std;


//ջ�������б�����Ϊ
//ջ�����ж�����Ϊ�գ�ջ���Է���Ԫ�ظ���
//ջ���õĶ���ӿ�

void test01() {
	//�ص㣺�����Ƚ���������ݽṹ

	stack<int> s;

	//��ջ

	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);

	//�鿴ջ������ջ

	std::cout << "ջ�Ĵ�С" << s.size() << endl;

	while (!s.empty()) {

		std::cout << "ջ��Ԫ��Ϊ�� " << s.top() << endl;

		//��ջ
		s.pop();
	}
	std::cout << "ջ�Ĵ�С" << s.size() << endl;



}

int main()
{
	test01();
	system("pause");
	return 0;
}