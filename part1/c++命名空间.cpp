#include <iostream>
#include <string>

using namespace std;

// using std::cout;

//定义一个命名空间

// namespace first_space{
//     void func(){
//         cout << "inside..first" <<endl;
//     }
// }


// namespace second_space{
//     void func(){
//         cout << "inside..second" <<endl;
//     }
// }


//嵌套命名空间
namespace first_space{
    void func(){
        cout << "inside..first" <<endl;
    }

    namespace second_space{
        void func(){
            cout << "inside..second" <<endl;
        }
}
}
using namespace first_space::second_space;

int main(int argc, char const *argv[])
{
    first_space::func();//first
    func();//second
    // second_space::func();
    cout << "hello world" <<endl;
    return 0;
}
