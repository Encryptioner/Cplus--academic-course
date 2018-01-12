#include<iostream>

using namespace std;

class standard_time
{
    int hour,minute,second,x;

public:
    int get_data();
    int calc();
    void print();
};

int standard_time :: get_data()
{
    cout<<"Enter hour :\n";
    cin>>hour;
    cout<<"Enter minute :\n";
    cin>>minute;
    cout<<"Enter second : \n";
    cin>>second;
    return (hour,minute,second);
}

int standard_time :: calc()
{
    if(hour>24)
    {
        x=1;
    }
    if(minute>59)
    {
        x=1;
    }
    if(second>59)
    {
        x=1;
    }
    if(hour>12 && hour<=24)
    {
        hour=hour-12;
        x=2;
    }

    //cout<<"x= "<<x<<endl;
    return (hour,minute,second,x);
}

void standard_time :: print()
{
    //cout<<"x= "<<x<<endl;
    cout<<"Time in 12 hour format.. \n\n";
    if(x==1)
    {
        cout<<"00 : 00 : 00\n";
    }
    /*else if(x==2)
    {
        cout<<hour<<" : "<<minute<<" : "<<second<<" pm \n";
    }
    else
    {
        cout<<hour<<" : "<<minute<<" : "<<second<<" am \n";
    }*/
    cout<<(x==2) ?  (hour<<" : "<<minute<<" : "<<second<<" pm \n") : (hour<<" : "<<minute<<" : "<<second<<" am \n");
}


int main()
{
    standard_time t;
    t.get_data();
    t.calc();
    t.print();
    return 0;
}
