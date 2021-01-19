#include <iostream>
#include <string>
#include <list>
#include <new>
#include <typeinfo>
using namespace std;
struct A
{

};
void test01()
{
    char* words[] = {"srarely", "plump", "buck", "mulligan"};
    size_t words_size = sizeof(words)/sizeof(char*);
    cout << "words_size = "<<words_size<<endl;
    list<string> words2(words, words + words_size);

    const list<int>::size_type list_size = 64;
    list<string> slist(list_size, "eh?");
}
void test02()
{
    A* ptr;
    ::new ((void*)ptr) A();
    ptr = new A();
}
int main() {
    test02();
    return 0;
}
