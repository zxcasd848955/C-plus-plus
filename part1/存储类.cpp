#include <iostream>
#include <string>
#include <string>
//存储类
using namespace std;
//auto c++11不再是 register 弃用
const int MAX = 3;
int main(int argc, char const *argv[])
{
    // auto f = 3.15;
    // char var[MAX] = {'a', 'b', 'c'};
    // char *ptr;
    // ptr = var;

    // for (int i = 0; i < MAX; i++){
    //     cout << "adress" << i <<"=";
    //     cout << (int *)ptr << endl;

    //     cout << "value is" <<"=";
    //     cout << *ptr << endl;

    //     ptr++;
    // }

    // char greeting[6] = {'H','e', 'l', 'l', 'o', '\0'};
    // cout << greeting <<endl;s

    string str = "hello";
    string str1 = "world";
    string str3;
    str3 = str + str1;
    cout << str3 <<endl;

    return 0;
}

