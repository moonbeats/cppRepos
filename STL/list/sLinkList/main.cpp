#include <iostream>
#include "sLinkList.h"
using namespace std;

void test_sLinkList()
{
    sLinkList<int> s;

    cout<<"call operator = "<<endl;
    s = {1, 2, 4, 5, 6, 6};
    cout << "call insert"<<endl;

    cout<<"call length"<<endl;
    cout<<s.length()<<endl;
    cout<<"call delete"<<endl;
    s.remove(2);
    cout<<"call search"<<endl;
    s.search(5);
    cout<<"call visit"<<endl;
    s.visit(5);
    cout<<"call traverse"<<endl;
    s.traverse();

}

int main() {
   test_sLinkList();
   system("pause");
   return 0;
}
