#include <iostream>
#include <cassert>
using namespace std;


class IntArray{
    public:
        explicit IntArray( int sz = DefaultSize );

        IntArray( int *array, int array_size);


        IntArray( const IntArray &rhs );

        ~IntArray(){};

        int&  operator[](int index);

    private: 
        static const int DefaultSize = 12;
        const int size;
};

int& IntArray::operator[](int index){
        assert( index >=0 && index < size);
}


int main(int argc, char const *argv[])
{
    


    return 0;
}
