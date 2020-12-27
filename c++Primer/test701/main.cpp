#include <iostream>
using  namespace std;
void reset(int *ip)
{
    *ip = 0;
    ip =0;
}
void test01()
{
    int i = 42;
    int *p = &i;
    cout<<"i:"<<*p<<endl;
    reset(p);
    cout<<"i:"<<*p<<endl;
}
int main(int argc,char* argv[]) {
    int i;
    cout << "The path of current file:" << argv[0] << endl;
    for (i = 1; i < argc; i++)
    {
        cout << i << "," << argv[i] << endl;
    }


    cout << argv[1] << "+" << argv[2] << "=" << ( ( atof(argv[1]) ) + ( atof(argv[2]) ) ) << endl;

    return 0;
}
