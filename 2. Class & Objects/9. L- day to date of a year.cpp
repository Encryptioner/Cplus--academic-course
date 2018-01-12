#include<iostream>

using namespace std;

class date
{
public:
    int total_day;
    int day, month, year;
public:
    /*int getday();
    int calc();
    int print();*/
    int getday()
{
    cout<<"Enter total day count: \n";
    cin>>total_day;
    return total_day;
}

int calc()
{
    int x;
    year=(total_day/365);
    x=total_day-(year*365);
    if(x<365)
    {
        month=x/30;
    }
    day=x-(month*30);
    //return (year,month,day);
}

int print()
{
    cout<<"\nYear = "<<year<<endl<<"Month = "<<month<<endl<<"Day = "<<day<<endl;
    return 0;
}
};


int main()
{
    date a;
    a.getday();
    a.calc();
    a.print();
    return 0;
}
