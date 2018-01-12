#include<iostream>

using namespace std;

class time
{
private:
    int total_sec;
    int day, hour, minute, sec;
public:

    int get_time()
{
    cout<<"Enter total  time in second: \n";
    cin>>total_sec;
    return total_sec;
}

int calc()
{
    int x;
    hour=(total_sec/3600);
    x=total_sec%3600;/*x=total_sec%3600 || x=total_sec-(hour*3600);*/
    if(x<3600)
    {
        minute=x/60;
    }
    sec=x-(minute*60);
    return (hour,minute,sec);
}

int print()
{
    cout<<"\nHour = "<<hour<<endl<<"Minute = "<<minute<<endl<<"Second = "<<sec<<endl;
    return 0;
}
};


int main()
{
    time a;
    a.get_time();
    a.calc();
    a.print();
    return 0;
}

