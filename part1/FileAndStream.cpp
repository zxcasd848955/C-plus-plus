#include <iostream>
#include <string>
// #include <ofstream>
#include <fstream>
using namespace std;


int main(int argc, char const *argv[])
{
    char data[100];

    // fstream outfile;
    // outfile.open('file.dat', ios::out || ios::trunc );    
    // ofstream outfile;
    // outfile.open("file.dat");

    // cout << "writting to file" <<endl;
    // cin.getline(data, 100);

    // outfile << data <<endl;    
    // cout << "finished"<<endl;

    // outfile.close();


    ifstream inFile;
    inFile.open("file.dat");

    inFile.seekg(1, ios::beg);
    inFile >> data;

    cout << data <<endl;

    inFile >>data;

    cout << data <<endl;
    inFile.close();

    return 0;
}

