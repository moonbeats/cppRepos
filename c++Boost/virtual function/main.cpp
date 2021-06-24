#include "bits/stdc++.h"
using namespace std;
void (*pFun)();
class Base{
public:
    virtual void function1(){
        cout<<"Base::function1()"<<endl;
    }
    virtual void function2(){
        cout<<"Base::function2()"<<endl;
    }
    virtual void function3(){
        cout<<"Base::function3()"<<endl;
    }
};
class Derived: public Base {
public:
    void function1(){
        cout<<"Derive::function1()"<<endl;
    }
    void function4(){
        cout<<"Derive::function4()"<<endl;
    }
};

int main() {
    Derived derivedObj;
    Base* pBase = & derivedObj;
    cout<<(int*)pBase<<endl;
    cout<< (int*) * (int*)pBase<<endl;

    return 0;
}
