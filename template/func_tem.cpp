#include <cstdlib>
#include <iostream>


template<typename T>
void func() {

} 


template<typename T, template<typename, typename> class A, size_t N>
void Func(T input) {
    T a = input;
    A<int, double> b;
    int array[N] = {};
}
// 实例化
// 1. 编译器使用函数实参来推断模板实参进行实例化。
// 2. 必须显示指定模版函数的返回值
// 3. 当我们使用一个函数模板初始化一个函数指针时，编译器会使用函数指针的类型来推断模板实参的。

// 显示实例化
// 

template<typename Rel, typename T>
Rel func1(T input) {
    Rel a = 1;
    std::cout << "func1 " << std::endl;
    return a;
}

int main(void) {
    double a = 100.4;
    auto res = func1<int>(a);
    std::cout << res << std::endl;
}