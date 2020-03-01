#include <cstring>


class String{
public:
    //初值
    String(const char* cstr=0);
    //拷贝构造
    String(const String& str);
    //拷贝赋值
    String& operator=(const String& str);
    //析构函数
    ~String();
    char* get_c_str() const{return m_data;}
private:
    char* m_data;
};

inline 
String::String(const char* cstr=0){
    if(cstr){
        m_data = new char[strlen(cstr)+1];
        strcpy(m_data, cstr);
    }
    else{
        m_data = new char[1];
        *m_data = '\0';
    }
}

inline
String::~String(){
    delete [] m_data;
}

inline
String::String(const String& str){
    m_data = new char[strlen(str.m_data)+1];
    strcpy(m_data, str.m_data);
}

inline
String& String::operator=(const String& str){ //在typename后面加&为引用
    if(this == &str) //再objectname前加&为取地址，得到的是指针
        return *this;
    delete[] m_data;
    m_data = new char[strlen(str.m_data)+1];
    strcpy(m_data, str.m_data);
    return *this;
}