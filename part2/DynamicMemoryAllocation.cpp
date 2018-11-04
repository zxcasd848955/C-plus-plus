
#include <iostream>
#include <memory>

#include <new>
using namespace std;



auto_ptr< int > par( new int( 1024 ));


/*
constant dynamic memory allocation
*/

const int *pi = new const int( 1024 );

/*
    定位new expression incldue<new>
*/

const int chunk = 16;

class Foo {

     /*
      预分配大量的内存
     */

    public:
         int val() { return _val; };
         Foo() { _val = 0; };

    private:
         int _val;
         
};




char *buf = new char [ sizeof(Foo) * chunk ];
