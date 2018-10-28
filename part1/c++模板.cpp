#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <stdexcept>

using namespace std;

//泛型编程  容器----单一的定义     模板  

//template <class type> ret-type func-name(parameter list){}

// template <typename T> 
// inline T const& Max(T const& a, T const& b){
//     return a < b ? b:a;
// }

// int main(int argc, char const *argv[])
// {
    
//     int i = 28;
//     int j = 20;
//     cout <<"Max(28,20)" << Max(i, j) <<endl;
//     cout << "argv.." <<*argv <<endl;//*argv ----> 文件的绝对路径
//     return 0;
// }




 //泛型类模板

 template <class T>

 class Stack{
    
    private:
         vector<T> elems;
    
    public:
        void push(T const&);
        void pop();
        T top() const;

        bool empty() const{
            return elems.empty();
        }


 };

 template <class T>
 void Stack<T>::push(T const& elem){
     elems.push_back(elem);
 }

template <class T>
void Stack<T>::pop(){
    if (elems.empty()){
        throw out_of_range("empty stack");
    }
    elems.pop_back();
}

 template <class T>
 T Stack<T>::top() const{
     if (elems.empty()){
         throw out_of_range("empty stack");
     }
     return elems.back();
 }

int main(){
    
    try
    {
        Stack<int> intStack;
        intStack.push(7);

        cout << intStack.top() <<endl;
    }
    catch(exception const&  e){
        cerr<<"exception"<<e.what()<<endl;
        return -1;
    }

}