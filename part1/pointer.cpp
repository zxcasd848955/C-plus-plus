#include <iostream>

using namespace std;

main(int argc, char const *argv[])
{
    int vsr = 20;
    int *ip;

    ip = &vsr;

    cout << ip <<endl;
    cout << *ip <<endl;
    return 0;

}
