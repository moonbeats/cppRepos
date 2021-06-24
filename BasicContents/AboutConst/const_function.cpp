/*
 * @author:Ding Gengfa
 * @version:1.0
 * @date:2021/6/24
 */
#include<iostream>
using namespace std;

void condition1(){
    const int *ptr;
    *ptr = 10;//error
}
void condition2(){
    const int a = 10;
    const void * pa = &a;
    void* pb = &a;
}
void condition3(){
    const int *ptr;
    int value = 3;
    ptr = &value;
    int *ptr2 = & value;
    *ptr2 = 4;
    cout<<*ptr<<endl;
}

int main(){

}

