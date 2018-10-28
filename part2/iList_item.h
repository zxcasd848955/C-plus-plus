#include <iostream>

/*

类模板

*/

template <class eleType>
class iList_item{
    public:
        iList_item( eleType value, iList_item *item_to_link_to = 0 );
        void next( iList_item *ptr );
        iList_item* next();
        eleType value();
        void value( eleType new_value );

    private:
        eleType _value;
        iList_item *_next;
};

template <class eleType>
inline iList_item<eleType>::iList_item( eleType value, iList_item *item )
        :_value( value ){

            if ( !item ) _next = 0;
            else{
                _next = item -> _next;
                item -> _next = this;
            }
        }


template <class eleType>
inline void  iList_item<eleType>::next( iList_item *ptr ){
    _next = ptr;
 
}

template <class eleType>
inline iList_item<eleType>* iList_item<eleType>::next(){
    return  _next;
}

template <class eleType>
inline eleType iList_item<eleType>::value() {
    return _value;
}


template <class eleType>
inline void iList_item<eleType>::value( eleType new_value ) {
    _value = new_value;
}