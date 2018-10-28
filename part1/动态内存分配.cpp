#include <iostream>
#include <string>
#include <exception>

using namespace std;

//对象的动态内存分配

class Box{
    public:
        Box(){
            cout << "调用构造函数" <<endl;
        }

        ~Box(){
            cout << "调用析构函数" << endl;
        }
};
















int main(int argc, char const *argv[])
{
    // double* value = NULL;
    // value = new double;
    // if (!value){
    //     cout <<"error: "<<endl;
    //     exit(1);
    // }

    // *value = 123.11; 

    // cout <<"value=" <<value <<endl;

    // delete value;


    //二维数组

    // int **p;
    // int i, j;

    // p = new int *[4];
    // for (i=0; i<4; i++){
    //     p[i] = new int [8];
    // }

    // //释放内存


    // for (i=0; i<4; i++){
    //     delete [] p[i];
    // }

    // delete [] p;


    //对象的动态内存分配

    Box* myBoxArray = new Box[4];
    delete [] myBoxArray;
    


    return 0;


}
