#include <algorithm>
#include <iostream>
#include <utility>
#include <vector>
#include <map>
#include <set>
#include <fstream>

#include <stddef.h>
#include <ctype.h>

using namespace std;

typedef pair<short, short> location;
typedef vector<location> loc;
typedef vector<string> text;
typedef pair<text*, loc*> text_loc;
typedef map<string, loc*> text_map;
typedef set< string >::difference_type diff_type;


text_loc* separate_words( const vector<string> *text_file ) {
    vector<string> *words = new vector<string>;
    vector<location> *locations = new vector<location>;
    short line_pos = 0;


    for ( ; line_pos < text_file -> size(); ++line_pos ) {
          short word_pos = 0;
          string textline = ( *text_file ) [ line_pos ];
          string::size_type pos = 0, prev_pos = 0;

          while ( ( pos = textline.find_first_of(' ', pos ) ) != string::npos ) {
                 words -> push_back( textline.substr( prev_pos, pos - prev_pos ) );
                 locations -> push_back( make_pair( line_pos, word_pos ) );

                 ++word_pos; prev_pos = ++pos;
          }

          /*
            出里最后一行
          */
         words -> push_back( textline.substr( prev_pos, pos- prev_pos ) );
         locations -> push_back(  make_pair( line_pos, word_pos ) );
    }

    return new text_loc( words, locations );
}


extern map<string, loc*>* build_word_map( const text_loc *text_locations ) {

          map< string, loc* > *word_map = new map< string, loc* >;
          
          vector<string> *text_words = text_locations -> first;
          vector<location> *text_locs = text_locations -> second;

          register int elem = text_words -> size();

          for ( int ix = 0; ix < elem; ++ix ) {

               string textword = ( *text_words )[ ix ];

               if ( textword.size() < 3 )  continue;

               if ( !word_map -> count( ( *text_words )[ ix ] ) ) {
                     loc *ploc = new vector<location>;
                     ploc -> push_back( ( *text_locs )[ ix ] );

                     word_map -> insert( value_type( ( *text_words )[ ix ], ploc ) );   

               }else {
                     ( *word_map )[ ( *text_words )[ ix ] ] -> push_back( ( *text_locs )[ ix ] );
               }
          }

          return word_map;
}




extern void display_map_text( map<string, loc*> *text_map ) {
                            typedef map<string, loc*> tmap;
                            tmap::iterator iter = text_map -> begin(), iter_end = text_map -> end();


                            while ( iter != iter_end ) {
                                   cout << " word : " << ( *iter ).first << " (" ;
                                   int loc_cnt = 0;
                                   loc *text_loc = ( *iter ).second;

                                   loc::iterator liter = text_loc -> begin(), endliter = text_loc -> end();

                                   while ( liter != endliter ) {
                                         
                                         if ( loc_cnt ) cout << ", ";

                                         else ++loc_cnt;


                                         cout << " (" << ( *liter ).first << ", " << ( *liter ).second << " )";

                                         ++liter;
                                   }

                                   cout << " )\n";

                                   ++iter;
                            
                                        
                            }

                            cout << endl;
}


/*
    一个排除单词的集合 set
*/

set< string > exclusion_set;

ifstream infile()




int main(int argc, char const *argv[])
{
    /*
    string ele("ab2c3d7R4E6");
    string dig("0123456789");
    string::size_type k =  ele.find_first_of(dig);
    cout << "index" << k <<endl;
    string::size_type l = ele.find_first_not_of(dig);
    cout << "index" << l << endl;
    string::size_type p = ele.find_last_not_of(dig);
    cout << "index" << p << endl;
*/
    string file_elems("\",.;:!?)(\\/"); 

    return 0;
}
