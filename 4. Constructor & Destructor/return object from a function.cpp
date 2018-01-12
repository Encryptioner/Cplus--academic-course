#include <iostream>
using namespace std;
class Complex
{
    private:
       int real;
       int imag;
    public:
       Complex(): real(0), imag(0) { }
       void Read()
        {
           cout<<"Enter real and imaginary number respectively:"<<endl;
           cin>>real>>imag;
        }

       /*Complex Add(Complex comp2)
        {
            Complex temp;
            temp.real=real+comp2.real;
/* Here, real represents the real data of object c1 because this function is called using code c1.Add(c2) */
            //temp.imag=imag+comp2.imag;
/* Here, imag represents the imag data of object c1 because this function is called using code c1.Add(c2) */
          /*  return temp;
        } */
        void Display()
        {
            cout<<"Sum="<<real<<"+"<<imag<<"i";
        }
};

       Complex ::Add(Complex comp2)
        {
            Complex temp;
            temp.real=real+comp2.real;

            temp.imag=imag+comp2.imag;

        return temp;
        }
int main()
{
    Complex c1,c2,c3;
    c1.Read();
    c2.Read();
    c3=c1.Add(c2);
    c3.Display();
    return 0;
}
