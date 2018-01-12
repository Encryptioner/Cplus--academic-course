#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int main()
{
    cout.width(5);
    //cout<<setw(4)<<532<<endl;
    cout<<532<<endl;

    cout<<sqrt(2)<<endl;

    cout.precision(10);
    //cout.width(5);//no change
    cout<<1.56441466461313115416<<endl;
    cout<<sqrt(2)<<endl;

    cout.fill('*');
    cout.width(5);
    cout<<12.2<<endl;

    cout.fill('*');
    cout.precision(3);
    cout.setf(ios::internal, ios::adjustfield);
    //cout.setf(ios::scientific, ios::floatfield);
    cout.width(18);
    cout<<-12.34567<<endl;
}
