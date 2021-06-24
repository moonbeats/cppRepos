/*
 * file:2jjalloc.h
 */

#ifndef INC_02_2JJALLOC_H
#define INC_02_2JJALLOC_H
#include<new> //for placement new
#include<cstddef>//for ptrdiff_t,size_t
#include<cstdlib>//for exit()
#include<limits>//for UINT_MAX
#include<iostream>//for cerr

namespace std
{
    template <class T>
    inline T* _allocate(ptrdiff_t size,T*){
        set_new_handler(0);
        T* tmp = (T*)(::operator new((size_t)(size * sizeof(T))));
        if(tmp == 0){
            cerr<<"out of memeory"<<endl;
            exit(1);
        }
        return tmp;
    }

    template <class T>
    inline void _deallocate(T* buffer){
        ::operator delete(buffer);
    }

    template<class T1,class T2>
    inline void _construct(T1* p,const T2& value){
        new(p) T1(value);
    }

    template <class T>
    inline void _destory(T* ptr){
        ptr->~T();
    }

    template <class T>
    class MyAllocator{
    public:
        typedef T value_type;
        typedef T* pointer;
        typedef const T* const_pointer;
        typedef T& reference;
        typedef const T& const_reference;
        typedef size_t size_type;
        typedef ptrdiff_t difference_type;
        //rebind allocator of type U
        template<class U>
        struct rebind{
           typedef  MyAllocator<U> other;
        };

        //hint used for locality

    };


}
#endif //INC_02_2JJALLOC_H
