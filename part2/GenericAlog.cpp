#include <list>
#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

using namespace std;
int main(int argc, char const *argv[])
{
    int ia[6] = {0, 1, 2, 3, 4, 5};

    vector<string> avec;
    list<double> dlist;

    vector<string>::iterator vitor;
    list<double>::iterator liter;

    int *pia;

    pia = find( &ia[0], &ia[6], 4);
/*
    liter = find( dlist.begin(), dlist.end(), )
*/
    cout << pia <<endl;


    string name("annel");
    int pos = name.find("ann");
    if ( pos == string::npos ){
        cout << "ann is not found" <<endl;
    }
    string::size_type po = name.find("ann");
    return 0;
}

/*
    读入用户输入的文本文件
*/
/*
vector<string, allocator>*

*/

