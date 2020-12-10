#include <iostream>
using namespace std;
/**
 * 构造函数和析构函数调用次序 派生类对象的构造
1 先构造基类
2 再构造成员
3 最后构造自身（调用构造函数）
 */
class A {
    int x;
public:
     A(int i=0) {
         x=i;
         cout << "A-----"<<x<<endl;
     }
};
class B {
    int y;
public:
    B(int i) {
        y=i;
        cout << "B-----"<<y<<endl;
    }
};
class C {
    int z;
public:
    C(int i) {
        z=i;
        cout << "C-----"<<z<<endl;
    }
};
class D : public B{
public:
    C c1, c2;
    A *a1 = new A(10);
    A a0,a4;
    D( ) : a4(4),c2(2),c1(1),B(1) {
        cout << "D-----5"<<endl;
    }
};
int main(){
    D d;
    system("pause");
}
