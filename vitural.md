non-virtual函数:你不希望derived class重新定义（override）他
virtual函数：你希望derived class重新定义，且你对他已有默认定义
pure virtual函数：你希望derived class一定要重新定义他，你对他没有默认定义。
```C++
class Shape{
public:
    virtual void draw() const = 0;//pure virtual  void error(const std::string& msg);//impure virtual
    int objectID() const;//non-virtual
    ...
};
class Rectangle:public Shape{...};
class Ellipse: public Shape{...};
```