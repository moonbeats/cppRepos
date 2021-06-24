/*
 * @author:Ding Gengfa
 * @version:1.0
 * @date:2021/6/24
 */
#include<iostream>
using namespace std;
void define_const_function(const int i){
    i = 10;//error
    cout<<i<<endl;
}
int main(){
    define_const_function(1);
}

