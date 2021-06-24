#include<iostream>
using namespace std;

class A {
private:
	int id;
public:
	A() :id(0) { cout << "default ctor.this=" << this << " id=" << id << endl; }
	A(int i):id(i){ cout << "ctor.this=" << this << " id=" << id << endl; }
	~A() { cout << "dtor.this=" << this << " id=" << id<< endl; }
};
int main()
{
	size_t size = 3;
	A* buf = new A[size];
	A* tmp = buf;
	cout << "buf=" << buf << " tmp=" << tmp << endl;
	for (int i = 0; i < size; ++i)
	{
		new(tmp++)A(i);
	}
	delete[] buf;
	return 0;
}