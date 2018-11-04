#include <iostream>
#include <string>


using namespace std;

extern "C" void ( *pg )( int ) = exit;/* line 27 */

extern "C" typedef void FC( int );
void f2( FC *pframe );

int main(int argc, char const *argv[])
{
    
    typedef int (*PFV)();/*  无参数*/

    PFV testCase[10];

    typedef int (*PK)();

    PK pk( int );

    typedef int func( const string &, const string & );

    void sort( string *, string *, int ( * )( const string &, const string & ) );


    int ( *ff( int ) )( int*,  int);//return a pointer to a func ====> int ( * ) ( int* int );

    /*
        extern "C" void ( *pf )( int );
    */

   ( *pg )(99);

   
    typedef void ( *pointer )( int );
    pointer papf[2];
    
    
    typedef  void ( *papf )( int );

    typedef void ( *fe )( int );
    fe  pap[20];
  

   

    int lei( const string );
    int jk( const string );

    typedef int ( *test )( const string );
    test funcs[ 2 ] = {
            lei,
            jk
    };    

    test ( *pointerOffuncs )[2] = &funcs;

    return 0;
}
