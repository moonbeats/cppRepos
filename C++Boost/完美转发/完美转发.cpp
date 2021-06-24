#include<iostream>
using namespace std;

class CMyString
{
public:
	CMyString(char* pStr)
		: m_pStr(NULL)
		, m_nLen(0)
	{
		if (NULL != pStr)
		{
			m_nLen = strlen(pStr);
			m_pStr = new char[m_nLen + 1];
			memcpy(m_pStr, pStr, m_nLen);
			m_pStr[m_nLen] = 0;
			cout << "一般构造函数 str=" << m_pStr << endl;
		}
	}

	CMyString(const CMyString& o)
		: m_pStr(NULL)
		, m_nLen(0)
	{
		if (NULL != o.m_pStr)
		{
			m_nLen = o.m_nLen;
			m_pStr = new char[m_nLen + 1];
			memcpy(m_pStr, o.m_pStr, m_nLen);
			m_pStr[m_nLen] = 0;
			cout << "拷贝构造函数 str=" << m_pStr << endl;
		}
	}
	const CMyString& operator=(CMyString&& o)
	{
		char* pStrTmp = o.m_pStr;
		int nLen = o.m_nLen;

		o.m_pStr = m_pStr;
		o.m_nLen = m_nLen;

		m_pStr = pStrTmp;
		m_nLen = nLen;
		cout << "右值引用类型 重载赋值运算符 str=" << m_pStr << endl;
		return *this;
	}
	const CMyString& operator=(const CMyString& o)
	{
		if (this != &o)
		{
			if (NULL != m_pStr)
			{
				delete[] m_pStr;
				m_pStr = NULL;
			}
			m_nLen = o.m_nLen;
			if (NULL != o.m_pStr)
			{
				m_pStr = new char[m_nLen + 1];
				memcpy(m_pStr, o.m_pStr, m_nLen);
				m_pStr[m_nLen] = 0;
			}
			cout << "重载赋值运算符 str=" << m_pStr << endl;
		}
		return *this;
	}

	~CMyString()
	{
		if (NULL != m_pStr)
		{
			//cout << "析构函数 str=" << m_pStr << endl;
			delete m_pStr;
		}
	}

	char* GetData()
	{
		return m_pStr;
	}
	CMyString(CMyString&& o)
		: m_pStr(NULL)
		, m_nLen(0)
	{
		char* pStrTmp = o.m_pStr;
		int nLen = o.m_nLen;

		o.m_pStr = m_pStr;
		o.m_nLen = m_nLen;

		m_pStr = pStrTmp;
		m_nLen = nLen;
		cout << "右值引用类型 拷贝构造函数 str=" << m_pStr << endl;
	}
	void swap(CMyString& o)
	{
		char* pStrTmp = o.m_pStr;
		int nLen = o.m_nLen;

		o.m_pStr = m_pStr;
		o.m_nLen = m_nLen;

		m_pStr = pStrTmp;
		m_nLen = nLen;
	}
private:
	char* m_pStr;
	int m_nLen;
};

void CoreFun(CMyString t)
{
	cout << "CoreFun" << endl;
}

void ICoreFun(CMyString t)
{
	cout << "ICoreFun" << endl;
	CoreFun(t);

}

int main()
{
	CMyString lvalue(const_cast<char*>("hello this is the lvalue"));
	ICoreFun(lvalue);
	system("pause");
	return 0;
}