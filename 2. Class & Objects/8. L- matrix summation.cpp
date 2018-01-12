#include<iostream>
using namespace std;

class matrix_sum
{
    int a[10][10],b[10][10],d[10][10];
    int i,j,c,r;
public:
    int getdata();
    int summation();
    int display();
};

int matrix_sum :: getdata()
{
    cout<<"Enter row no: "<<endl;
    cin>>r;
    cout<<"Enter column no: "<<endl;
    cin>>c;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<"Input a"<<i<<j<<":"<<endl;
            cin>>a[i][j];
            cout<<"Input b"<<i<<j<<":"<<endl;
            cin>>b[i][j];
        }
    }
}

int matrix_sum :: summation()
{
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
        d[i][j]=a[i][j]+b[i][j];
        }
    }
}

int matrix_sum :: display()
{
    cout<<"\nSum of a&b matrix: \n"<<endl;
    for(i=1;i<=r;i++)
    {
        for(j=1;j<=c;j++)
        {
            cout<<d[i][j]<<"\t";
        }
        cout<<endl;
    }
}

int main()
{
    matrix_sum obj;
    obj.getdata();
    obj.summation();
    obj.display();
}
