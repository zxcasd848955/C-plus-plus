#include <iostream>
#include <string>

using namespace std;


class Box
{
    public:
        double len;
        double height;

        // double getVolume(void){
        //     return height * len;
        // }
        //函数声明
        double getVolume(void);
        void setHeight(double len);
};

double Box::getVolume(void){
    return height * len;

}

void Box::setHeight(double len){
    len = len;
}

int main(int argc, char const *argv[])
{
    Box myBox;
    cout << "Box 体积"<<myBox.getVolume()<<endl;
    return 0;
}


