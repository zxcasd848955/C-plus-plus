#include <iostream>
#include <string>

using namespace std;

//函数重载 运算符重载

class Box{
    public:

        double setWeight(double wei){
            Weight = wei;
        }

        double setHeight(double hei){
            Height = hei;
        }
        double getWeightAndHeight(void){
            return Weight + Height;
        }

        double getHeight(void){
            return Height;
        }


        virtual int area(void){
            cout << "area is .." <<endl;
            return 0;
        }////虚函数  

        //纯虚函数
        virtual int area() = 0;
        Box operator+(const Box& b){
            Box box;
            box.Weight = this->Weight + b.Weight +10086;
            box.Height = this->Height + b.Height + 10086;//  -> 指针

            return box;

        }

    private:
      double  Weight;
      double Height;
};

int main(int argc, char const *argv[])
{
    Box box1;
    Box box2;
    Box box3;


    box1.setHeight(1.0);
    box1.setWeight(1.0);

    box2.setHeight(1.0);
    box2.setWeight(1.0);
    
    box3 = box1 + box2;
    cout << "Box Height"<< box3.getHeight() <<endl;
    return 0;
}


