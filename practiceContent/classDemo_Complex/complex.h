//
// Created by NUMB on 2020/12/10.
//

#ifndef CLASSDEMO_COMPLEX_COMPLEX_H
#define CLASSDEMO_COMPLEX_COMPLEX_H
#include<iostream>
class complex
{
private:
    double re;
    double im;

    friend complex& __doapl (complex*,const complex&);
public:
    explicit complex(double r = 0,double i = 0):re(r),im(i){}
    complex& operator += (const complex&);
    double real() const {return re;}
    double imag() const {return im;}


};
#endif //CLASSDEMO_COMPLEX_COMPLEX_H
