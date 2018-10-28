#include <vector>
#include <iostream>
using namespace std;


class iStack{
    public:
        iStack( int capacity )
        : _stack( capacity ), _top( 0 ) { };

        bool pop( int value );
        bool push( int value );

        bool full();
        bool empty();
        void display();
        int peek();

        int size();


    private:
        int _top;
        vector<int> _stack;
};

inline int iStack::size(){
    return _top;
}

inline bool iStack::empty(){
    return _top ? false : true;
}


inline bool iStack::full(){
    return _top < _stack.size() - 1 ? false : true;
}

inline int iStack::peek(){
    if( !empty() ){
        return _stack[ -- _top ];
    }else{
        return (int)0;
    }
}

