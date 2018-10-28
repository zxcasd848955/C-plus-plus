#include <iostream>
#include "4.h"

int main(int argc, char const *argv[])
{
    
    const int array_size = 4;
    Array<int> ia(array_size);

    Array<double> ca(array_size);

    Array<char> da(array_size);

    int ix;
    for (ix = 0; ix < array_size; ++ix){
        ia[ix] = ix;
        ca[ix] = ix + 0.01;
        da[ix] = ix + 'a';
    }

    for (ix = 0; ix < array_size; ++ix){
        cout << ix << "\tia" << ia[ix] << "\tca" << ca[ix] <<"\tda" <<da[ix] <<endl;
    }


    return 0;
}
