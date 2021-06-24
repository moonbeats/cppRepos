#include<cstddef>
#include<iostream>
using namespace std;

class Screen {
public:
	Screen(int x) :i(x) {};
	int get() { return i; }

	void* operator new(size_t);
	void operator delete(void*, size_t);
private:
	Screen* next;
	static Screen* freeStore;
	static const int screenChunk;
private:
	int i;
};
Screen* Screen::freeStore = 0;
const int Screen::screenChunk = 100;

void* Screen::operator new(size_t size) {
	Screen* p;
	if (!freeStore)
	{
		//link list ЮЊПе
		size_t chunk = screenChunk * size;
		freeStore = p = reinterpret_cast<Screen*>(new char[chunk]);
		for (; p != &freeStore[screenChunk - 1]; ++p) {
			p->next = p+1;
		}
		p->next = 0;
	}
	p = freeStore;
	freeStore = freeStore->next;
	return p;
}

void Screen::operator delete(void* p, size_t)
{
	(static_cast<Screen*>(p))->next = freeStore;
	freeStore = static_cast<Screen*>(p);

}

void test01() {
	cout << sizeof(Screen) << endl;
	size_t const N = 100;
	Screen* p[N];
	for (int i = 0; i < N; ++i) {
		p[i] = new Screen(i);
	}
	for (int i = 0; i < 10; ++i) {
		cout << p[i] << endl;
	}
}

int main() {


	test01();
	return 0;
}