#include <iostream>
#include <string>
#include <complex>


using namespace std;


class String;
istream& operator>>( istream&, String&);
ostream& operator<<( ostream&, String& );

class String{
    public:
        String();

        String( const char* );

        String( const String& );


        ~String();


        String& operator=( const String& );
        String& operator=( const char* );

        bool operator==( const String& );
        bool operator==( const char* );

        char& operator[](int);

        int size() { return _size; };
        char* c_str() { return _string; };



    private:
        int _size;
        char* _string;

};