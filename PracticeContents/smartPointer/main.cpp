#include <iostream>
using namespace std;
/**
 * auto_ptr 在原来指针加一层封装，结束和异常退出时自动掉用析构函数
 * @tparam T
 */
template<typename T>
class Auto_ptr1
{
public:
    Auto_ptr1(T* ptr = nullptr):
            m_ptr{ptr}
    {}

    virtual ~Auto_ptr1()
    {
        delete m_ptr;
    }

    T& operator*() { return *m_ptr; }
    T* operator->() { return m_ptr; }
private:
    T* m_ptr;
};

class Resource
{
public:
    int m_data = 0;
public:
    inline int getData(){return m_data;};
    Resource() { cout << "Resource acquired!" << endl; }
    virtual ~Resource() { cout << "Resource destoryed!" << endl; }
};
int main()
{
    {
        Auto_ptr1<Resource> res(new Resource);/* Resource* ptr = new Resource*/
        Auto_ptr1<Resource> res2(res);
        cout << res->getData()<<endl;
        cout << (*res).m_data<<endl;
    }

    cin.ignore(10);
    return 0;
}
