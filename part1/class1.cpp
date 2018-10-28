#include <iostream>
#include <string>

using namespace std;

class Box{
    public:
        double len;
        void setWidth(double wid);
        double getWidth(void);

    private:
        double width;
};

double Box::getWidth(void){
    return width;
}