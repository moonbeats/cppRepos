//
// Created by NUMB on 2021/1/2.
//

#ifndef VECTOR_VECTOR_H
#define VECTOR_VECTOR_H
#include <iostream>
#include <assert.h>
#include <initializer_list>

namespace mystl
{
    template<class T>
    class vector
    {
        static_assert(!std::is_same<bool,T>::value,"vector<bool> is abandoned in mystl" );
    public:
        typedef T value_type;
        typedef T* pointer;
        typedef const T* cosnt_pointer;
        typedef T& reference;
        typedef const T& const_reference;
        typedef unsigned long size_type;
        typedef unsigned int diffenece_type;

        typedef value_type* itertor;
        typedef const value_type* cosnt_iterator;

    private:
        //part1：构造、复制、移动、析构函数
        vector() noexcept
        { try_init();}

        explicit vector(size_type n)
        {fill_init(n, value_type());}

        vector(size_type n, const value_type& value)
        {fill_init(n, value);}



    };
}
#endif //VECTOR_VECTOR_H
