#include <iostream>

using namespace std;

class iList_item;

class iList{
    public:
          iList() : _at_front( 0 ), _at_end( 0 ), _size( 0 ) { };






          int size();
          void insert(iList_item *ptr, int value );
          void bump_up_size();
          void bump_down_size();
          void insert_front( int value );
          void iList::insert_end( int value );
          iList_item* iList::find( int value );
          void display( ostream &os = cout );


    private:
        iList( const iList& );
        iList& operator=( const iList& );




        iList_item *_at_front;
        iList_item *_at_end;

        int _size;

};

inline int iList::size(){
    return _size;
}

inline void iList::insert( iList_item *ptr, int value ){
    if ( !ptr ){    
        insert_front( value );
    }else{
        bump_up_size();
        new iList_item( value, ptr );
    }
}




inline void iList::bump_up_size(){
    ++_size;
}
inline void iList::bump_down_size(){
    --_size;
}


inline void iList::insert_front( int value ){
        iList_item *ptr = new iList_item( value );
        if ( !_at_front ) _at_front = _at_end = ptr;
        else {
             ptr ->next( _at_front );
             _at_front = ptr;
        }

        bump_up_size();
}   

inline void iList::insert_end( int value ){
       if ( !_at_end ) _at_end = _at_front = new iList_item( value );
       else _at_end = new iList_item( value, _at_end );
       bump_up_size();
}


iList_item* iList::find( int value ) {
        iList_item  *ptr = _at_front;
        while ( ptr ) {
             if ( ptr -> value == value) break;
             ptr = ptr -> next();
        }

        return ptr;
}
/*
inline void iList::display() {
    for ( iList_item *iter = _at_front;
                iter != _at_end;
                iter = iter -> next();
                ) {

        }
}
*/

inline void iList::display( ostream &os ) {
    os << "\n(" << _size << ")(";
    iList_item *ptr = _at_front;
    while ( ptr ) {
        os << ptr -> value() << " ";
        ptr = ptr ->next();
    }
}



class iList_item{
    public:
        iList_item( int value, iList_item *item_to_link_to = 0 );
        void next( iList_item *ptr );
        iList_item* next();
        int value();
        void value( int new_value );

    private:
        int _value;
        iList_item *_next;
};

inline iList_item::iList_item( int value, iList_item *item )
        :_value( value ){

            if ( !item ) _next = 0;
            else{
                _next = item -> _next;
                item -> _next = this;
            }
        }


inline void  iList_item::next( iList_item *ptr ){
    _next = ptr;
 
}

inline iList_item* iList_item::next(){
    return  _next;
}


inline int iList_item::value() {
    return _value;
}

inline void iList_item::value( int new_value ) {
    _value = new_value;
}