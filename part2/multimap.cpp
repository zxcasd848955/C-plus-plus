#include <map>
#include <string>
#include <list>
#include <set>
#include <utility>
#include <iostream>
#include <stack>

using namespace std;

multimap<string, list<string> > sh;

multiset<string> ms;

void  code_fragment() {
          
          typedef multimap< string, string >::value_type valType;

          multimap< string, string > authors;
          string search_item("alian");
          authors.insert( valType( string("bar"), string("hehe") ) );


          while ( cin && cin >> search_item ) {
                 switch ( authors.count( search_item ) ) {
                        case 0:
                               break;
                        
                        case 1:
                               multimap<string, string>::iterator iterator;
                               iterator = authors.find( search_item );
                               break;
                        
                        default:
                               typedef multimap< string, string >::iterator iter;
                               pair< iter, iter > pos;

                               pos = authors.equal_range( search_item );/*  return iterator */

                               for ( ; pos.first != pos.second; pos.first++ ) {
                                     
                               }
                 }
          }
}
