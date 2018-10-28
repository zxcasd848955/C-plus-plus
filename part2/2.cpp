#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    

    int al = 10;

    int *p;
    p = &al;

   *p =  *p +1;

    cout <<al << endl;

    int *pint = new int( 1024 );

   /*
   * int *s = new int[ 4 ];
   */
    
    delete pint;
   
   /*
    delete [] s;
    */


    return 0;
}
