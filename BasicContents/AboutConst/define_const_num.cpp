/*
 * @author:Ding Gengfa
 * @version:1.0
 * @date:2021/6/24
 */
#include <iostream>
using namespace std;
void define_const_num(){
    const int b = 10;
    //b = 0;//error
    const string s = "helloworld";
    //const int i,j=0;//error
}

int main() {
    define_const_num();
    return 0;
}
