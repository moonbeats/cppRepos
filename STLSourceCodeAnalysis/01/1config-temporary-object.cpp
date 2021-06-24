/*
 * file:lconfig-temporaray-object.cpp
 * 本测试用例测试仿函数 用于for_each的情形
 */
#include <iostream>
#include <algorithm>
#include<vector>
using namespace std;

class Studet{
friend ostream& operator<<(ostream&os,const Studet& stu);
public:
    Studet(int age,string name):m_age(age),m_name(name){}
    int m_age;
    string m_name;
};
//全特化和操作符重载均可完成打印，操作符重载更简便
ostream& operator<<(ostream&os,const Studet& stu){
    os<<'['<<stu.m_name<<']'<<' '<<'['<<stu.m_age<<']'<<endl;
}

template <typename T>
class print{
public:
    void operator()(const T& elem)//operator() 重载
    {cout << elem<<' ';}
};


//print的全特化版本
//template <>
//class print<Studet>{
//public:
//    void operator()(const Studet& elem)//operator() 重载
//    {cout<<elem.m_age<<' '<<elem.m_name<<' ';}
//};

int main() {
    int ia[6] = {0,1,2,3,4,5};
    vector<int> iv(ia,ia+6);
    for_each(iv.begin(),iv.end(),print<int>());
    vector<Studet> iStudent;
    iStudent.push_back(Studet(10,"jhon"));
    iStudent.push_back(Studet(12,"Alice"));
    iStudent.push_back(Studet(12,"Tom"));
    iStudent.push_back(Studet(11,"jessica"));
    iStudent.push_back(Studet(10,"Siki"));
    for_each(iStudent.begin(),iStudent.end(),print<Studet>());
    return 0;
}
