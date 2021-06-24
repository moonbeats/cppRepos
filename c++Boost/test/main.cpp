#include <iostream>
#include <queue>

using namespace std;
int main() {
    queue<int> qi;
    qi.push(10);
    qi.push(10);
    cout<<qi.front()<<endl;
    cout<<qi.empty()<<endl;
    cout<<qi.back()<<endl;
    return 0;
}
