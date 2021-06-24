#include <iostream>
#include <exception>
#include "string.h"
using namespace std;
class MyException: public exception{
public:
    char* errorMsg;
    MyException(const char* msg){
        cout<<"MyException Ctor!"<<endl;
        errorMsg = new char[strlen(msg)+1];
        strcpy(errorMsg,msg);

    }
    MyException(const MyException& ex){
        cout<<"MyException(const MyException& ex)"<<endl;
        this->errorMsg = new char[strlen(ex.errorMsg)+1];
        strcpy(this->errorMsg,ex.errorMsg);
    }
    MyException& operator=(const MyException& ex){
        cout<<"MyException& operator=(const MyException& ex)"<<endl;
        if(this->errorMsg != nullptr){
            delete[] this->errorMsg;
            this->errorMsg = nullptr;
        }
        this->errorMsg = new char[strlen(ex.errorMsg)+1];
        strcpy(this->errorMsg,ex.errorMsg);
    }
    void what(){
        cout<<errorMsg<<endl;
    }

    ~MyException(){
        cout<<"MyException Dtor"<<endl;
        if(errorMsg != nullptr) delete[] errorMsg;
    }
};

int main() {
    MyException a("1");
    MyException b = a;
    MyException c("2");
    c = b;
    try{
        throw  MyException("Throw MyException");
    }
    catch(MyException e){
        e.what();
    }

    return 0;
}
