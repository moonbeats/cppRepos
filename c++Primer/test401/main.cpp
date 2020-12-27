#include <iostream>
#include <cstring>
#include <vector>
using namespace std;

void test01()
{
    const size_t  arr_az = 8;
    int int_arr[arr_az];
    for(int* pbegin = int_arr,*pend = int_arr+arr_az;pbegin!=pend;++pbegin)
    {
        *pbegin = 0;

    }
    for (int i = 0;i!=arr_az;++i)
    {
        cout<<"int_arr"<<"["<<i<<"]="<<int_arr[i]<<endl;
    }
}
void test02()
{
    const double pi = 3.14;
    //double *ptr = &pi;
    const double *cptr = &pi;
    const void* pv = &pi;
    cout<<pv<<endl;
    const char* cp = "somevalue";
    while(*cp)
    {
        cout<<*cp<<endl;
        ++cp;

    }
int cnt = 0;
    while(cp)
    {
        ++cnt;
        ++cp;
        cout <<"cnt="<<cnt<<endl;
    }

    char ca[] = {'C','+','+'};
    cout<<strlen(ca)<<endl;
}

void test03()
{
    vector<int> iv;
    int ielem;
    cout << "please input int type num: " << endl;
    while(1)
    {
        cin >> ielem;
        if(cin.get() == '\n') break;
        iv.push_back(ielem);

    }
    int* ia = new int[iv.size()];
    for(int i = 0;i!=iv.size();++i)
    {
        ia[i] = iv[i];
        cout<<"ia["<<i<<"]="<<ia[i]<<endl;
    }
    delete [] ia;


}

void test04()
{
    string s;
    cin >>s;
    cout << s <<endl;


}
int main() {
    test04();
    return 0;
}
