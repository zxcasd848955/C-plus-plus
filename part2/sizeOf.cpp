#include <cstddef>
#include <string>
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    
    int a[] = {1, 8, 8};
    size_t array_size = sizeof a;
    
    size_t array_elem_count = array_size / sizeof( int );

    int b = 3;
    int *p = &b;

    size_t pointer_size = sizeof( p );

    string st1("hello");
    string st2("world");


     std::cout << sizeof(st1)<< sizeof(char) << std::endl;

    std::cout << pointer_size << std::endl;
    std::cout << array_size << std::endl;
    return 0;
}

