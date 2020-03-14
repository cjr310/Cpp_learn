![](8.png)

string 设计print函数的时候要指明const因为print不会其改变内容，不然用const object调用会出错。


copy on write 是由于有些对象是可以共享的，所以要考虑。

当成员函数的const和non-const版本同时存在，const object 只能调用const版本，non-const只能调用non-const版本