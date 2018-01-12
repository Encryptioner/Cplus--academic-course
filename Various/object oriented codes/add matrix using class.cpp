#include<iostream>  //problem
using namespace std;
class matrix
{
private:
    int row,column,a[10][10],b[10][10],c[10][10],mat[10][10],i,j;
public:
    void input_data();
    void output_data();
};
void matrix::input_data()
{

    cout<<"Input the number of row:";
    cin>>row;
    cout<<"Input the number of column:";
    cin>>column;
    for(i=0;i<row;i++)
        for(j=0;j<column;j++)
        cin>>mat[i][j];
       /* cout<<"Input the number of row:";
    cin>>row;
    cout<<"Input the number of column:";
    cin>>column;
    for(i=0;i<row;i++)
        for(j=0;j<column;j++)
            cin>>b[i][j];*/

};
int main()
{
    matrix a,b,c;
    cout<<"Input matrix a:"<<endl;
    a.input_data();
    cout<<"Input matrix b:"<<endl;
    b.input_data();
    cout<<"Output matbrix c:"<<endl;

};

void matrix :: output_data()
{
    matrix c;
  cout<<"Output matrix c:"<<endl;
 for(i=0;i<row;i++){
        for(j=0;j<column;j++)
        {
            cout<<"c[i][j]="<<c.output_data()<<"\t";
        }
        cout<<endl;
 }
}

/*int main()
{
    matrix a,b,c;
    cout<<"Input matrix a:"<<endl;
    a.input_data();
    cout<<"Input matrix b:"<<endl;
    b.input_data();
    cout<<"Output matbrix c:"<<endl;
    c.output_data();
};
*/

