#include <iostream>
#include <bitset>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
    bitset<32> bitvec;
    bool k = bitvec.any();

    string n("11111111010101");
    bitset<32> bitv(n, 6);
    cout << bitv <<endl;
    bitv.flip();
    cout << bitv << endl;
    bitset<32> bitv3(012);
    string bitc(bitv3.to_string());
    cout << bitc << endl;

    unsigned long m = bitv3.to_ulong();
    cout << m <<endl;
    return 0;
}
