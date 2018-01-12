#include<iostream>
using namespace std;
int main()
{
    int i,j,row1,row2,column1,column2,a[10][10],b[10][10],c[10][10];
    cout<<"Enter the number of rows in first matrix:"<<endl;
    cin>>row1;
    cout<<"Enter the number of columns in first matrix:"<<endl;
    cin>>column1;
    cout<<"Enter the number of rows in second matrix:"<<endl;
    cin>>row2;
    cout<<"Enter the number of columns in second matrix:"<<endl;
    cin>>column2;
    if(row1!=row2||column1!=column2)
        cout<<"Summation is impossible"<<endl;
    else{
    cout<<"Enter the elements of first matrix:"<<endl;
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
            cin>>a[i][j];

    }
    cout<<"Enter the elements of second matrix:"<<endl;
    for(i=0;i<row2;i++)
    {
        for(j=0;j<column2;j++)
            cin>>b[i][j];
    }
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
            c[i][j]=a[i][j]+b[i][j];
    }

    }
    for(i=0;i<row1;i++)
    {
        for(j=0;j<column1;j++)
            cout<<"Output matrix is:"<<c[i][j]<<endl;
    }
}

