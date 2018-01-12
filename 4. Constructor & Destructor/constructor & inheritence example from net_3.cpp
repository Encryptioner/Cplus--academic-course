#include<iostream>
using namespace std;

class vehicle
{
private:
    int passengers;     //number of passengers
    int fuelcap;           //fuel capacity in gallons
    int mpg;              //fuel consumption in miles per gallon

public:
    vehicle(int p, int f, int m)
    {
        passengers = p;
        fuelcap = f;
        mpg = m;
    }

    //compute & return the range
    int range()
    {return fuelcap*mpg;}

    //accessor functions
    int get_passengers(){return passengers;}
    int get_fuelcap(){return fuelcap;}
    int get_mpg(){return mpg;}
};

class truck:public vehicle
{
private:
    int cargocap;
public:
    truck(int p, int f, int m, int c):vehicle(p, f, m)
    {cargocap=c;}

    int get_cargocap(){return cargocap;}
};


int main()
{
    truck semi(2,300,25,44500);
    truck pickup(4,400,40,2000);
    int dist = 250;

    cout<<"semi can carry : "<<semi.get_cargocap()<<" pounds\n\n";
    cout<<"it has a range of : "<<semi.range()<<" miles\n\n";
    cout<<"to go "<<dist<<" miles semi needs "<<dist/semi.get_mpg()<<" gallons of fuel\n\n\n\n";

    cout<<"pickup can carry : "<<pickup.get_cargocap()<<" pounds\n\n";
    cout<<"it has a range of : "<<pickup.range()<<" miles\n\n";
    cout<<"to go "<<dist<<" miles pickup needs "<<dist/pickup.get_mpg()<<" gallons of fuel\n\n\n";


    return 0;


}

