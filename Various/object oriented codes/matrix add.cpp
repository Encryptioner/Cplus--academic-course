#include<iostream>
using namespace std;
int main()
{
    int a[10][10],b[10][10],c[10][10];
    int row,column,i,j;
    cout<<"Input the number of rows:"<<endl;
    cin>>row;
    cout<<"Input the number of columns:"<<endl;
    cin>>column;
    cout<<"Input the elements of matrix a:"<<endl;
    for(i=0;i<row;i++)
        for(j=0;j<column;j++)
        cin>>a[i][j];
cout<<"Input the elements of matrix b:"<<endl;
    for(i=0;i<row;i++)
        for(j=0;j<column;j++)
        cin>>b[i][j];
  for(i=0;i<row;i++)
        for(j=0;j<column;j++)
                c[i][j]=a[i][j]+b[i][j];
cout<<"Output matrix c:"<<endl;
 for(i=0;i<row;i++){
        for(j=0;j<column;j++)
        {
            cout<<c[i][j]<<"\t";
        }
        cout<<endl;
 }

}