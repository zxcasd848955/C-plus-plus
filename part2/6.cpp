#include <cassert>
#include "4.h"

template <class elemType>
class ArrayRc : public Array<elemType> {
    public:
          ArrayRc(int sz = Array<elemType>::DefaultSize)
          :Array<elemType>(sz){};

          ArrayRc(elemType *ia, int sz)
          :Array<elemType>(ia, sz){};


          ArrayRc(const ArrayRc &rhs)
          :Array<elemType>(rhs){};

          virtual elemType& operator[](int index){
              assert( index >=0 && index < Array<elemType>::size() );
              return ia[ index ];
          }


    private:
        elemType *ia;
           
}