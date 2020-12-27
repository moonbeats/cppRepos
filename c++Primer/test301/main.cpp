#include <iostream>
#include <bitset>
using namespace std;
void test01()
{
    string st("The expanse of spirit\n");

    cout << "The size of"<<st<<"is"<<st.size()
         <<" characters,including the new lines"<<endl;
}
void test02()
{
    string str("1111111000000011001101");
    bitset<32> bitvec5(str,5,4);
    bitset<32> bitvec6(str,str.size()-4);
    cout << bitvec5<<endl;
    cout <<bitvec6<<endl;
    size_t bits_set = bitvec6.count();
    cout <<"bitvec6_conut = "<<bits_set<<endl;
}
int main() {
    test02();
    return 0;
}
