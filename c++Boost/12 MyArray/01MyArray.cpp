#include <iostream>
using namespace std;

template<class T>
class MyArray {
public:
	//共可以容纳多少个元素
	int mCapacity;

	//当前数组有多少个元素
	int mSize;
	//保存数组的首地址

	T* pAddr;
public:
	MyArray(int capacity) {
		this->mCapacity = capacity;
		this->mSize = 0;
		this->pAddr = new T[this->mCapacity];
	}
	MyArray(const MyArray<T>& arr) {
		this->mSize = arr.mSize;
		this->mCapacity = arr.mCapacity;
		this->pAddr = new T[this->mCapacity];
		for (int i = 0; i < this->mSize; i++)
		{
			this->pAddr[i] = arr.pAddr[i];
		}
	}
	T& operator[](int index) {
		return this->pAddr[index];
	}
	MyArray<T>&  operator=(const MyArray<T>& arr)
	{
		if (this->pAddr != nullptr) { delete[] this->pAddr; }
		this->mSize = arr.mSize;
		this->mCapacity = arr.mCapacity;
		this->pAddr = new T[this->mCapacity];
		for (int i = 0; i < this->mSize; i++)
		{
			this->pAddr[i] = arr.pAddr[i];
		}


		return *this;
	}

	void PushBack(T& data) {
		//判断是否有位置
		if (this->mSize >= this->mCapacity) { return; }

		this->pAddr[this->mSize] = data;

		this->mSize++;
	}

	//对右值取引用
	void PushBack(T&& data) {
		if (this->mSize >= this->mCapacity) { return; }

		this->pAddr[this->mSize] = data;

		this->mSize++;
	}


	~MyArray() {
		if (this->pAddr != nullptr)
		{
			delete[] this->pAddr;
		}

	}

};

void test01()
{
	MyArray<int> marray(20);
	int a = 10, b = 20, c = 30, d = 40;
	marray.PushBack(a);
	marray.PushBack(b);
	marray.PushBack(c);
	marray.PushBack(d);

	//不能对右值取引用
	//左值可以在多行使用
	//右值是临时变量，只能在当前行使用
	marray.PushBack(199);
	marray.PushBack(299);
	marray.PushBack(399);
	marray.PushBack(133399);

	for (int i = 0; i < marray.mSize; i++)
	{
		cout << marray[i] << " ";
	}
	cout << endl;

}

int main()
{
	test01();
	return 0;
}