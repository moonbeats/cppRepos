/**
 * 本文件测试STL容器包括：
 * 顺序容器：array,vector,deque,list,forward-list
 * 关联容器:set/multiset,map/multimap
 * 无序容器：unordered set/multiset,unordered map/multimap
 */
#include <iostream>
#include <array>
#include <ctime>
#include <cstdlib>
#include <vector>
#include "Lib/redbud/io/color.h"
#define green redbud::io::state::manual << redbud::io::hfg::green
#define red   redbud::io::state::manual << redbud::io::hfg::red

using namespace std;


//help function
long get_a_target_long()
{
    long target = 0;
    cout << "target(0~" << RAND_MAX << "): ";
    cin >> target;
    return target;
}
string get_a_target_string()
{
    long target = 0;
    char buf[10];

    cout<<"target (0~ "<<RAND_MAX <<"): ";
    cin >> target;
    snprintf(buf, 10, "%d", target);
    return string(buf);
}
int compareLongs(const void* a, const void* b)
{
    return (*(long*) a - *(long*) b);
}

int compareStrings(const void* a, const void* b)
{
    if (*(string*)a > *(string*)b)
        return 1;
    else if (*(string*)a < *(string*)b)
        return -1;
    else
        return 0;
}

/**
 * 1 test array
 */
namespace T01 {
    void test_array() {
        cout << green << "test_array()...................." << endl;
        const size_t ASIZE = 500000;
        array<long, ASIZE> c;
        clock_t timeStart = clock();
        for (long i = 0; i < ASIZE; ++i) {
            c[i] = rand();
        }

        cout << green << "mili-seconds : " << (clock() - timeStart) << endl;
        cout << green << "array.size()= " << c.size() << endl;
        cout << green << "array.front()= " << c.front() << endl;
        cout << green << "array.back()= " << c.back() << endl;
        cout << green << "array.data()= " << c.data() << endl;

        long target = get_a_target_long();

        timeStart = clock();
        qsort(c.data(), ASIZE, sizeof(long), compareLongs);
        long *pItem = (long *) bsearch(&target, (c.data()), ASIZE, sizeof(long), compareLongs);
        cout << green << "qsort() + bsearch(),mili-second : " << (clock() - timeStart) << endl;
        if (pItem != nullptr)
            cout << "found, " << *pItem << endl;
        else
            cout << "not found!" << endl;
    }
}

namespace T02 {
    void test_vector(long &value) {
        cout << green << "test_vector()...................." << endl;

        vector<string> c;
        char buf[10];

        clock_t timeStart = clock();
        for (long i = 0; i < value; ++i) {
            try {
                snprintf(buf, 10, "%d", rand());
                c.push_back(static_cast<string>(buf));
            }
            catch (exception &p) {
                cout << green << "i = " << i << p.what() << endl;
                abort();
            }

        }
        cout << green << "mili-seconds: " << (clock() - timeStart) << endl;
        cout << green << "vector.size()= " << c.size() << endl;


    }
}



int main() {
    T01::test_array();
    system("pause");
    return 0;
}
