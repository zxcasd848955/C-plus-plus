#include <iostream>
#include <string>
#include <exception>

using namespace std;
//自定义异常

struct MyException : public exception{
    const char * what() const throw(){
        return "c++ exception";
    }
};

int main(int argc, char const *argv[])
{
    try{
        throw MyException();
    }catch(MyException& e){
      std::cout<<"myexception"<<e.what()<<endl;  
    }catch(std::exception& e){

    }
    return 0;
}
