#include <iostream>

#include "iList_item.h"
#include "LinkSque.h"


int main(int argc, char const *argv[])
{
    
    iList myList;

    for ( int ix = 0; ix < 10; ++ix ) {
        myList.insert_front( ix );
        myList.insert_end( ix );
    }

    cout << "ok: after insert_front and insert_end\n";

    myList.display();

    iList_item *it = myList.find( 8 );
    cout << "\n" 
         << "Seaching for the value 8"
         << ( it ? "yes\n" : "no\n");
    

    

    myList.insert(it, 1024);

     cout << "\n"
         <<"insert new element 1024..";

    
    myList.display();

    int elem = myList.remove( 9 );

    cout << "remove 9\n";
    myList.display();

    cout <<"remove front\n";
    myList.remove_front();
    myList.display();
/*
    cout << "remove all\n";
    myList.remove_all();
    myList.display();

*/

    cout <<"contact..";

    iList kl;
    iList &h = kl;
    kl.insert_front(10);
    kl.insert_end(20);


    myList.contact( h );
    myList.display();
    
    
    
    return 0;
}
