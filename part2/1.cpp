#include <iostream>
#include <string>
#include <vector>

using namespace std;
int main(){

    string word;

    vector<string> text;
    while ( cin >> word ){
        text.push_back(word);
    }


    #ifdef DEBUG
    cout << "beginning executing main" <<endl;
    #endif
}