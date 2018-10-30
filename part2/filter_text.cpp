#include <iostream>
#include <utility>
#include <vector>
#include <string>
#include <locale>

#include <bits/allocator.h>
using namespace std;


/*
    hello*  去掉*
*/
 void filter_text( vector<string> *words, string file_elems ) {

                vector<string>::iterator iter = words -> begin();
                vector<string>::iterator iter_end = words -> end();


                if ( !file_elems.size() ) {
                     file_elems.insert( 0, "\".," );

                }

                while ( iter != iter_end ) {
                      string::size_type pos = 0;

                      while ( ( pos = ( *iter ).find_first_of( file_elems, pos )  ) != string::npos ) {
                            ( *iter ).erase( pos, 1 );

                            iter++;
                      }
                }
 }



/*
    解决大小写
*/

void strip_caps( vector<string, allocator> )









 int main(int argc, char const *argv[])
 {

    string file_elems("\",.;:!?)(\\/");
    vector<string> *word  = new vector<string>;
    string h("/.+(STL).*$1/");
    word -> push_back( h );

    string fil("/.+()*$1");
/*
    filter_text( word, fil);
 */   
    vector<string>::iterator k = word ->begin();
    vector<string>::iterator m = word -> end();
    int p = 0;
    
        ( *k ).erase(0, 4);
        p++;
        ( *k ).erase(3, 6);
    

    cout << (*word)[0] << endl;

    
   



     return 0;
 }
 