#include<iostream>
#include<memory>
using namespace std;

void test_unique_ptr() {
	//unique_ptr
	unique_ptr<string> p3(new string("auto"));
	unique_ptr<string> p4;
	p4 = move(p3);
	p3.release();
	//cout << *p3 << endl;
	cout << *p4 << endl;
	unique_ptr<string> pu1(new string("hello world"));
	unique_ptr<string> pu2;
	//pu2 = pu1;                                          // #1 not allowed
	unique_ptr<string> pu3;
	pu3 = unique_ptr<string>(new string("You"));           // #2 allowed

}

void test_shared_ptr() {
	shared_ptr<int> sp(new int(1));
	shared_ptr<int> sp1 = sp;
	shared_ptr<int> sp2 = sp;
	shared_ptr<int> sp3 = sp;
	shared_ptr<int> sp4 = sp;
	cout << sp.use_count() << endl;


}
class B;
class A
{
public:
	shared_ptr<B> pb_;
	~A()
	{
		cout << "A delete\n";
	}
};
class B
{
public:
	shared_ptr<A> pa_;
	~B()
	{
		cout << "B delete\n";
	}
};

void test_weak_ptr() {
	shared_ptr<B> pb(new B());
	shared_ptr<A> pa(new A());
	pb->pa_ = pa;
	pa->pb_ = pb;
	cout << pb.use_count() << endl;
	cout << pa.use_count() << endl;


}

template<class T>
class SmartPointer {
public:
	SmartPointer(T* p = 0) : _ptr(p), _reference_count(new size_t) {
		if (p)
			*_reference_count = 1;
		else
			*_reference_count = 0;
	}

	SmartPointer(const SmartPointer& src) {
		if (this != &src) {
			_ptr = src._ptr;
			_reference_count = src._reference_count;
			(*_reference_count)++;
		}
	}


	SmartPointer& operator=(const SmartPointer& src) {
		if (_ptr == src._ptr) {
			return *this;
		}
		releaseCount();
		_ptr = src._ptr;
		_reference_count = src._reference_count;
		(*_reference_count)++;
		return *this;
	}


	//重载操作符
	T& operator*() {
		if (_ptr) {
			return *_ptr;
		}
		//throw exception
	}
	//重载操作符
	T* operator->() {
		if (_ptr) {
			return _ptr;
		}
		//throw exception
	}
	//析构函数
	~SmartPointer() {
		if (--(*_reference_count) == 0) {
			delete _ptr;
			delete _reference_count;
		}
	}


private:
	T* _ptr;
	size_t* _reference_count;
	void releaseCount() {
		if (_ptr) {
			(*_reference_count)--;
			if ((*_reference_count) == 0) {
				delete _ptr;
				delete _reference_count;
			}
		}
	}

};
void test_SmartPointer() {

	SmartPointer<char> cp1(new char('a'));
	SmartPointer<char> cp2(cp1);
	SmartPointer<char> cp3;
	cp3 = cp2;
	cp3 = cp1;
	SmartPointer<char> cp4(new char('b'));
}

int main() {
	//test_unique_ptr();
	//test_shared_ptr();
	//test_weak_ptr();

	test_SmartPointer();
	return 0;
}