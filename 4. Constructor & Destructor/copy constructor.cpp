/* Source Code to demonstrate the working of overloaded constructors */
#include <iostream>
using namespace std;
class Area
{
    private:
       int length;
       int breadth;

    public:

       Area(): length(5), breadth(2){ }  // Constructor without no argument

       Area(int l, int b): length(l), breadth(b){ }// Constructor with two argument

       Area(const Area &A3)
       {
           length=A3.length;
           breadth=A3.breadth;      //if this not in use this program run
       }

       void GetLength()
       {
           cout<<"Enter length and breadth respectively: ";
           cin>>length>>breadth;
       }

       int AreaCalculation()
        {
            return (length*breadth);
        }

       void DisplayArea(int temp)
       {
           cout<<"Area: "<<temp<<endl;
       }
};
int main()
{
    Area A1,A2(2,1);
    Area A3(A2);

    int temp;

    cout<<"Default Area when no argument is passed."<<endl;
    temp=A1.AreaCalculation();
    A1.DisplayArea(temp);

    cout<<"Area when (2,1) is passed as argument."<<endl;
    temp=A2.AreaCalculation();
    A2.DisplayArea(temp);

    //A3.GetLength();
    cout<<"When construcor is copied :"<<endl;
    temp=A3.AreaCalculation();
    A3.DisplayArea(temp);
    return 0;
}

