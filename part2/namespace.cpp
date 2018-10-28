#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

/*
泛型算法
*/

int ia[10] = {
    1,2,3,46,7,8,9,98,65,43
};

int main(int argc, char const *argv[])
{
    vector<int> vec(ia, ia+10);
    sort( vec.begin(), vec.end() );
    cout << ia <<endl;

    return 0;
}
