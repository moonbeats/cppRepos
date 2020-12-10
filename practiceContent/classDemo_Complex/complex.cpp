//
// Created by NUMB on 2020/12/10.
//
#include <iostream>
using namespace  std;
#include "complex.h"
inline complex& __doapl(complex* ths,const complex& r)
{
    ths->re += r.re;
    ths->im += r.im;
    return *ths;
}

inline complex&
complex::operator+=(const complex & r) {
    return __doapl (this,r);
}

inline complex operator +(const complex& x,const complex& y)
{
    /**
     * @return 返回一个临时对象，匿名的
     */
    return complex(x.real() + y.real(),x.imag() + y.imag());
}
inline complex operator +(const complex& x,double y)
{
    /**
     * @brief +操作符重载，多个版本
     */
    return complex(x.real()+y,x.imag());
}

inline ostream& operator << (ostream& os,const complex& x)
{
    return os << '(' << x.real() <<','<<x.imag()<<")";
}