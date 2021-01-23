#include<iostream>
using namespace std;
//多态优点
//逻辑清晰
//可读性强
//便于维护

class AbstractCalculator
{
public:
	virtual int getResults()=0;
	int m_Num1;
	int m_Num2;
};

class AddCalculator :public AbstractCalculator
{
	int getResults() {
		return m_Num1 + m_Num2;
	}
};

class SubCalculator :public AbstractCalculator
{
	int getResults() {
		return m_Num1 - m_Num2;
	}
};

class MulCalculator :public AbstractCalculator
{
	int getResults() {
		return m_Num1 / m_Num2;
	}
};

class DivCalculator :public AbstractCalculator
{
	int getResults() {
		return m_Num1 / m_Num2;
	}
};

void test01() {

	AbstractCalculator* abc = new AddCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " + " << abc->m_Num2 << " = " << abc->getResults() << endl;
	delete abc;
	 abc = new SubCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " - " << abc->m_Num2 << " = " << abc->getResults() << endl;
	delete abc;
	 abc = new MulCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 10;
	cout << abc->m_Num1 << " * " << abc->m_Num2 << " = " << abc->getResults() << endl;
	delete abc;
	 abc = new DivCalculator;
	abc->m_Num1 = 10;
	abc->m_Num2 = 20;
	cout << abc->m_Num1 << " / " << abc->m_Num2 << " = " << abc->getResults() << endl;
	delete abc;
}

int main() {


	test01();
	system("pause");
	return 0;
}