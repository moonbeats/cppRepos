
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;
template<typename _Operation, typename _Tp>
inline binder2nd<_Operation>
bind2nd(const _Operation& __fn, const _Tp& __x)
{
    typedef typename _Operation::second_argument_type _Arg2_type;
    return binder2nd<_Operation>(__fn, _Arg2_type(__x));
}
template<typename _Tp>
struct less : public binary_function<_Tp, _Tp, bool>
{
    _GLIBCXX14_CONSTEXPR
        bool
        operator()(const _Tp& __x, const _Tp& __y) const
    {
        return __x < __y;
    }
};

template<typename _Arg1, typename _Arg2, typename _Result>
struct binary_function
{
    /// @c first_argument_type is the type of the first argument
    typedef _Arg1 	first_argument_type;

    /// @c second_argument_type is the type of the second argument
    typedef _Arg2 	second_argument_type;

    /// @c result_type is the return type
    typedef _Result 	result_type;
};

template<typename _Operation>
class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
    typename _Operation::result_type>
{
protected:
    _Operation op;
    typename _Operation::second_argument_type value;

public:
    binder2nd(const _Operation& __x,
        const typename _Operation::second_argument_type& __y)
        : op(__x), value(__y) { }

    typename _Operation::result_type
        operator()(const typename _Operation::first_argument_type& __x) const
    {
        return op(__x, value);
    }

    // _GLIBCXX_RESOLVE_LIB_DEFECTS
    // 109.  Missing binders for non-const sequence elements
    typename _Operation::result_type
        operator()(typename _Operation::first_argument_type& __x) const
    {
        return op(__x, value);
    }
} _GLIBCXX_DEPRECATED;

int main() {

    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(3);
    v.push_back(9);
    v.push_back(7);

    for (int i = 0; i < v.size(); i++)
        cout << v[i] << " ";
    cout << endl;
    cout << count_if(v.begin(), v.end(), bind2nd(less<int>(), 5)) << endl;

    return 0;
}

