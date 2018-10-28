#include <fstream>
#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    ofstream outfile("hello.txt");

    if( ! outfile )
        cerr << "open error\n";
    else
        outfile << "hello" << "world" <<endl;
       
    return 0;
}


