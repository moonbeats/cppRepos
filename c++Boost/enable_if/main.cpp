#include <iostream>
using namespace std;

template <bool,typename T = void>
struct my_enable_if{};

template<typename T>
struct my_enable_if<true,T>{
    using type = T;
};

template <typename T,typename Enable = void>
struct check;

template <typename T>
struct check<T,typename my_enable_if<T::value,T>::type>{
    static constexpr bool value = T::value;
};
int main() {

    return 0;
}
