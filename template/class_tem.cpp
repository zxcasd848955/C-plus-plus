#include <iostream>


template<typename T>
class Base {

};

//模版类作为模版参数
template<typename T, template<typename M> class Base>
class Other {

};

// 模版类成员函数
template<typename T>
class A {
public:
    void print();
}

template<typename T>
A<T>::print() {
    std::cout << "initial " << std::endl;
}

// 类模版的实例化，必须显示加上类型参数；一个类模版的成员函数只有在使用时才被实例化；
template<typename T>
using tt = std::pair<T, int>;
