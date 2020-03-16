Vector是一个能够存放任意型别的动态数组。
Vector在内存中的表现形式是一段地址连续的空间。
vector支持动态空间大小调整。
# 创建vector
```c++
std::vector<T> v;
std::vector<T> v(n,i);
std::vector<T> u(v); //拷贝

//通过一个数组创建vector
int array[] = {1, 2,3,4,5,6,7}
std::vector<int> v(array,array + 7);
```

```c++
vector<int> a;
a.push_back();
a.pop_back();
a.empty();
a.size();
a.clear();
```

访问vector元素
两种方法
1. vector::operator[]  但不做边界检测，可能会越界，但访问效率更高
2. vector::at()   如果越界会抛出exception，但效率比operator差点


erase
std::vector<int>::const_iterator it = v.begin();
v.erase(it + 1);

v.erase(std::remove_if(v.begin(), v.end(), ContainsString("C++")), v.end());