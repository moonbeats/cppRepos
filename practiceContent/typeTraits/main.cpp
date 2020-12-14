#include <iostream>


    struct __true_type {
    };
    struct __false_type {
    };

    template<class __Tp>
    struct __type_traits {
        /**
         * @brief has_trivial_default_constructor是类型
         */
        typedef __false_type has_trivial_default_constructor;
        typedef __false_type has_trivial_copy_constructor;
        typedef __false_type has_trivial_assignment_operator;
        typedef __false_type has_trivial_destructor;
    };

/*模板特化*/
    template<>
    struct __type_traits<int> {
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_copy_constructor;
        typedef __true_type has_trivial_assignment_operator;
        typedef __true_type has_trivial_destructor;
    };

    template<>
    struct __type_traits<char> {
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_copy_constructor;
        typedef __true_type has_trivial_assignment_operator;
        typedef __true_type has_trivial_destructor;
    };

//模板偏特化
    template<class _Tp>
    struct __type_traits<_Tp *> {
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_copy_constructor;
        typedef __true_type has_trivial_assignment_operator;
        typedef __true_type has_trivial_destructor;
        typedef __true_type is_POD_type;
    };

    class Shape {

    };

    template<>
    struct __type_traits<Shape> {
        typedef __true_type has_trivial_default_constructor;
        typedef __true_type has_trivial_copy_constructor;
        typedef __true_type has_trivial_assignment_operator;
        typedef __true_type has_trivial_destructor;
        typedef __true_type is_POD_type;
    };

    template<class T>
    void fun() {
        /**
         * 将__type_traits<T>这个模板类中的has_trivial_destructor嵌套类型定义一个叫做trivial_destructor的别名
         */
        typedef typename __type_traits<T>::has_trivial_default_constructor _Trival_constructor;
        fun1(_Trival_constructor());
    }


    void fun1(__true_type) {
        std::cout << "fun(_true_type) called" << std::endl;
    }


    void fun1(__false_type) {
        std::cout << "fun(_false_type) called" << std::endl;
    }

    int main() {
        fun<char>();
        fun<int>();
        fun<char *>();
        fun<double>();
        fun<Shape>();
        return 0;
    }
