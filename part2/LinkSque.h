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
          void insert_end( int value );
          iList_item* find( int value );
          void display( ostream &os = cout );
          void remove_front();
          void remove_all();
          int remove( int value );
          void contact( const iList &il );
          void reverse();
          void insert_all( const iList &rh ) ;
          iList_item* init_iter( iList_item *it = 0 );
          iList_item* next_iter();


    private:
        iList( const iList& );
        iList& operator=( const iList& );
        iList_item *_current;



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
             if ( ptr -> value() == value) break;
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

    os << ")\n";
}

inline void iList::remove_front() {
    if ( _at_front ) {
        iList_item *ptr = _at_front;
        _at_front = ptr -> next();

        if ( _current == ptr ) _current = _at_front;
        bump_down_size();
        delete ptr;
    }
}

void iList::remove_all() {
    while ( _at_front ) {
          remove_front();      
    } 

    _size = 0;
    _at_front = _at_end = 0;
}


int iList::remove( int value ) {
    iList_item *ptr = _at_front;
    int elem = 0;

    while ( ptr && ptr -> value() == value ) {
         ptr = ptr -> next();
         remove_front();
         ++elem;
    }    

    if ( !ptr ) {
        return elem;
    }

    iList_item *prev = ptr;
    ptr = ptr -> next();

    while ( ptr ) {
         if ( ptr -> value() == value ) {
              prev -> next( ptr -> next() );
              if ( _current == ptr ) _current = prev -> next();
              delete ptr;
              ++elem;
              bump_down_size();
              ptr = prev -> next();

              if ( !ptr ) {
                  _at_end = prev;
                  return elem;
              }

         }else {
              prev = ptr;
              ptr = ptr -> next();
         }
    }
}


void iList::contact( const iList &il ) {
         iList_item *ptr = il._at_front;

         while ( ptr ) {
             insert_end( ptr -> value() );
             ptr = ptr -> next();
         }
}

void iList::reverse() {
         iList_item *ptr = _at_front;
         iList_item *prev = 0;

         _at_front = _at_end;
         _at_end = ptr;

         while ( ptr != _at_front ) {
              iList_item *temp = ptr -> next();
              ptr -> next( prev );
              prev = ptr;
              ptr = temp;
         }

         _at_front -> next( prev );
}

iList::iList( const iList &rh ) : _at_front( 0 ), _at_end( 0 ) {
        insert_all( rh );
}


void iList::insert_all( const iList &rh ) {
            iList_item *ptr = rh._at_front;

            while (  ptr ) {
                insert_end( ptr -> value() );
                ptr = ptr -> next();
            }
}


inline iList_item* iList::init_iter( iList_item *it ) {
           return _current = it ? it : _at_front;
}

inline iList_item* iList::next_iter() {

          iList_item *next = _current ? _current -> next() : _current;
          
          return next;
}
