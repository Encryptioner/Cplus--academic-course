#include <iostream> /* A waygettinginformation from fiunction set() can't be made by myself */
//#include <cmath>

using namespace std;

class rectangle
{
private:
    int radius;
    float pi;

public:
    int set(int r, float p)
    /*const*/  /*If const is used here. this function is safe & program won't run.. */
    {
        radius=r;
        pi=p;

        //return r;
    }
    void print()
    {
        cout<<"radius = "<<radius<<"\nPi = "<<pi<<endl;
    }
    float area()
    {
        return radius*pi;
    }
};

int main()
{
    rectangle r1;
    //r1.set(10,20);
    int rad;
    float pe=3.1416;
    cout<<"Enter radius of circle = "<<endl;
    cin>>rad;
    r1.set(rad,pe);

    r1.print();

    cout<<"Area = "<<r1.area()<<endl;

    return 0;
}


