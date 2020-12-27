#include <iostream>
using namespace std;
class Empty{
public:
    //Big Three:一个或多个构造函数、一个析构函数、一个拷贝赋值操作符
    Empty() {}
    inline Empty(const Empty& rhs) {}
    ~Empty() {}

    inline Empty& operator=(const Empty& rhs){}
};
int main() {
    Empty e1;
    Empty e2(e1);
    e2 = e1;
    return 0;
}
