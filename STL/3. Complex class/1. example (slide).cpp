#include<iostream>
#include<complex>

using namespace std;

int main()
{
    complex<double> c1(2, 3),c2(2, -3);

    /*double real1=c1.real();
    double imag1=c1.imag();
    double real2=c2.real();
    double imag2=c2.imag();*/

    cout<<c1<<" * "<<c2<<" = "<<c1*c2<<endl;
    return 0;
}
