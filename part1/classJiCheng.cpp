#include <iostream>
#include <string>

using namespace std;

//public 继承

class A{
    public:
        int a;
        A(){
            a1 = 1;
            a2 = 2;
            a3 = 3;
        }

        void fun(){
            cout << a <<endl;
            cout << a1 <<endl;
            cout << a2 <<endl;
            cout << a3 <<endl;
        }

    public:
        int a1;

    protected:
        int a2;

    private:
        int a3;
};


class B : public A{
    public:
        int a;
        B(int i){
            A();
            a = i;
        }

        void fun(){
            cout << a <<endl;
            cout << a1 <<endl;
            cout << a2 <<endl;
            cout << a3 <<endl;//error
        }
};

int main(int argc, char const *argv[])
{
    B b(10);

    return 0;
}
