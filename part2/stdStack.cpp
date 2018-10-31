#include <stack>
#include <vector>
#include <iostream>
using namespace std;


class iStack{
       public:
             iStack( int capacity ) : _stack( capacity ) { }


             bool pop( int &value );
             bool push( int value );


             bool full();
             bool empty();

             void display();

             int size();



        private:
               /*int _top; */
               vector< int > _stack;

};


bool iStack::pop( int &top_value ) {
                if ( empty() ) return false;

                top_value = _stack.back();
                _stack.pop_back();

                return true;                       
}

bool iStack::push( int value ) {
                if ( full() ) return false;

                _stack.push_back( value );

                return true;
}

inline bool iStack::empty() {
            return _stack.empty();
}


inline int iStack::size() {
           
            return _stack.size();
}


inline bool iStack::full() {
            
            return _stack.max_size == _stack.size();
            
}

void iStack::display() {
          
          cout <<" (" << size() << " ) ( bot: ";

          for ( int ix = 0; ix < size(); ++ix ) cout << _stack[ ix ] << " ";
          
          cout << " :top)\n";
}


inline iStack::iStack( int capacity ) {
        if ( capacity ) {
             _stack.reserve( capacity );
        }
}























int main(int argc, char const *argv[])
{
    const int ia_size = 10;

    int ia[ ia_size ] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };

    int ix = 0;
    stack< int > iStack;

    for (; ix < ia_size; ++ix ) {
         iStack.push( ia[ ix ] );
    }


        



    return 0;
}
