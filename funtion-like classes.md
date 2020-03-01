```c++
template<class T1, classT2>
struct pair{
    T1 first;
    T2 second;
    pair() : firest(T1()), second(T2()){}
    pair(const T1& a, const T2& b): first(a), second(b) { }
......
};
```
```c++

template<class T>
struct identity {
    const T&
    operator() {const T& x} const { return x;}
};
```
```c++
template<class Pair>
struct select1st{
    const typename Pair::first_type& operator() (const Pair& x) const { return x.first;}
};

```
```c++
template <class Pair>
struct select2nd {
    const typename Pair::second_type& operator() (const Pair& x) const { return x.second;}
};
```

标准库中，方函数使用的奇特的base classes
template<class Arg, class Result>
struct unary_function{
    typesef Arg argument_type;
    typeddef Result result_type;
};

template<class Arg1, class Arg2, class Result>
struct binary_function{
    typedef Arg1 first_argument_type;
    typedef Arg2 second_argument_type;
    typedef Result result_type;
};
