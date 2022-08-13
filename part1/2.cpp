#include <iostream>
#include <limits>
#include <string>
using namespace std;


#define WIDTTH = 10;
int main(int argc, char const *argv[])
{
    // cout << "hello world" <<endl;
    // cout << "short: \t\t" << sizeof(short) <<endl;
    cout << "short" << (numeric_limits<short>::max)() <<endl;
    short int i;
    short unsigned int j;
    j = 50000;
    i = j;
    cout << i << " " << j;
    return 0;
}
