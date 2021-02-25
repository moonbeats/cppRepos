#include <iostream>

using namespace std;

class BaseMyException {
public:
	virtual void what() = 0;
	virtual ~BaseMyException() {};
};

class TargetSpaceNullException :public BaseMyException
{
public:
	virtual void what() {
		cout << "目标空间为空！" << endl;
	}
	~TargetSpaceNullException() {};
};

class SourceSpaceNullException :public BaseMyException
{
public:
	virtual void what() {
		cout << "源空间为空！" << endl;
	}
	~SourceSpaceNullException() {};
};

void copy_str(char* des, const char* src)
{
	if (des == nullptr) {
		throw TargetSpaceNullException();
	}
	if (src == nullptr)
	{
		throw SourceSpaceNullException();
	}
	int len = strlen(src) + 1;
	while (*src != '\0')
	{
		*des++ = *src++;
	}
}

int main()
{
	const char* src = "abcds";
	char buf[1024] = { 0 };
	try {
		copy_str(buf, src);
	}
	catch (BaseMyException & ex)
	{
		ex.what();
	}
	cout << src << endl;
	cout << buf << endl;
	return 0;

}