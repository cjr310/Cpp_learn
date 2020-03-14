模板特化
template<class Key>
struct hash{};
template<>
struct hash<char>{
    size_t operator() (char x) const{ return x;};
template<>
struct hash<int>{
    size_t operator()(int x) const { return x;};
template<>
sruct hash<long>{
    size_t operator(long x)const{ return x;};
}
}
}
cout>>hash<long>()(1000);

## partial specialization 
模板偏特化
1.个数的偏
template<typename T, typename Alloc=.....>
class vector{
    ...
};
template<typename Alloc=.....>   //和T绑定
class vector<bool,Alloc>{
    ..
}

2.范围的偏
template <typename T>
class C
{
    ...
};
template<typename T>
class C<T*>{
    ...
};
上面是泛化，下面是特化
C<string> obj1;
C<string*> obj2;//用的是指针