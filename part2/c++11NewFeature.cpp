/****
 * 
 * 
 * 
 * 
 * 
 * 统一的初始化方法     int arr[3]{ 1, 2, 3}  map< int string >{{1, "a"}, {2, "b"}}
 * 
 * 
 * 
 * 标准异常类   bad_typeid  bad_cast  bad_alloc     ios_base::failture    logic_error
 **/
#include <iostream>
#include <stdexcept>
#include <typeinfo>

#include <memory>
#include <vector>

#include <cstring>
using namespace std;

class Base {
       
       virtual void func() {};
};


class Derived : public Base {
             
             public:
                    void print() { };

};
/**
 * shared_ptr
 * 
 * */
struct A {
      ~A() { cout << "~A" << endl;}
};


void PrintObj ( Base  &  b ) {
              
              try {
                    
                    Derived & rd = dynamic_cast<Derived&> ( b );

                    rd.print();
              }
              catch ( bad_cast & e ) {
                     cerr << e.what() << endl;
                     /**
                      * std::bad_cast
                      **/
              }
}


struct C {
      
      int n;
      C( int i ) : n( i ) {}
};



class String {
        
        public:
             char * str;
             String() : str( new char[ 1 ] ) { str[ 0 ] = 0; }

             String( const char * s ) {
                   
                   str = new char[ strlen(s) + 1 ];
                   
             } 
};

/**
 * 
 *  左值引用 和 move 减少深拷贝的次数 如string类对象
 * 
**/






int main(int argc, char const *argv[])
{
/*    Base b;

    PrintObj( b );


*/
/*
    A *p = new A();
    shared_ptr<A> ptr( p );
    shared_ptr<A> ptr2;

    ptr2.reset( p );

    cout << "end" << endl;
  */

   
 /*for 循环  
    int ary[] = {1, 2, 3, 4, 5};
    for ( int & e : ary ) e *= 10;

    for ( int e : ary ) cout << e << endl;

    vector<C> st( ary, ary + 5 );

    for ( auto & it : st ) it.n  *= 10;

    for ( C it:st ) cout << it.n << ",";

    
*/
   


    return 0;
}


