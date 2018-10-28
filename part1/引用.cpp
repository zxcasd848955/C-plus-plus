#include <iostream>

using namespace std;

int& func(){
    int q;

    static int x;

    // return q;
    return x;
}


main(int argc, char const *argv[])
{
    // int i;
    // double d;

    // int& r = i;

    // cout << "reference" << r;

    // int age;
    // string name;

    // cin >>age >> name;
    // cout << age << "name" << name;
    
    char str[] = "Uable to read...";

    cerr << "Error message" << str << endl;

    return 0;

}
