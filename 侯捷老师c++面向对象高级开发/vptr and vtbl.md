![](7.png)
图中共有8个函数，其中4个虚函数
每个object中如果有virtual function，那么内存中就会存放着有一个vptr指向一个vtbl，里面存放着虚函数。

## 静态绑定
直接call某个地址
## 动态绑定
要求：1.通过指针，2.向上转型，3.通过virtual function
满足这3种情况就会编译为动态绑定