#include <iostream>
using namespace std;
struct  my_input_iterator_tag{};
struct  my_forward_iterator_tag:public my_input_iterator_tag{};
void __advance(int i, double j, my_input_iterator_tag,float){
    cout<<"__advance"<<"i="<<i<<"j="<<j<<endl;

}

int main() {
    int i = 1;
    double j = 0;
    float k = 1;
    __advance(i, j, my_forward_iterator_tag(),k);
    return 0;
}
