#include <iostream>
#define PI 3.14159;


#define MIN(a, b)(a < b? a:b)

#ifndef NULL
    #define NULL 0
#endif

#ifdef DEBUG
    cerr <<"debug" <<endl;

#endif
using namespace std;

int main(int argc, char const *argv[])
{
    // cout <<"PI == "<<PI <<endl;
    int i, j;
    i = 100;
    j = 30;
    cout << "最小的值" <<MIN(i, j) <<endl;
    return 0;
}
