#include <iostream>
#include <string>



int main(int argc, char const *argv[])
{
    
    typedef int (*PFV)();/*  无参数*/

    PFV testCase[10];


    int lei( const string );
    int jk( const string );

    typedef int ( *test )( const string );
    test funcs[ 2 ] = {
            lei,
            jk
    };    

    test ( *pointerOffuncs )[2] = &funcs;

    return 0;
}
