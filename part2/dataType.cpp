#include <cstring>
#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    /*string k;
    const char *l = k.c_str();
    
    string  str("test");
    int size = str.size();



    const char *h = "hello world";
    cout << h <<endl;
    */

/*
   int val = 19;
   int &reval = val;
   cout << reval << endl;
   int m = 0;
   reval = 2;
   cout << val << endl;
*/
/*   
    const int n = 10;
    const int *k = &n;

*/
/*指针
    int *p = 0;
    const int &ri = 0;

    int a1 = 10;
    int a2 = 19;

*/
/*引用
    p = &a1;
    int *p1 = &a2;
    p = p1;

    int &n = a1;
    int &b = a2;
    n = b;



    cout << *p <<endl;
    cout << a1 <<endl;
*/    

    enum open_mode{ input = 1, output, append };

    open_mode m = input;

    int a, b, c;

    int* a[]  = {&a, &b, &c};

    int jp[10];

    return 0;
}
