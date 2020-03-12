模板模板参数
template<typename T,
tempalte <typename T> class Container>

class XCls{
private:
    Container<T> c;
public:
....
};

template<typename T>
using Lst = list<T, allocator<T>>

XCls<string, list> mylst1; //错误.容器需要好几个参数
XCls<string, Lst> mylst2;

template<typename T,
template<typename T> class SmartPtr>

class XCls[
private:
    SmartPtr<t> sp;
public:
    XCls() : sp(new T){}

];


XCLs<string, shared_ptr> p1;
XCLs<long, auto_ptr> p4;