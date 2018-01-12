#include<iostream>
#include<vector>

using namespace std;

int main()
{
    int i;
    cin>>i;
    const int SIZE=6;
    vector<int>ax{1,2,3};
    vector<double>bx(i);
    for(double &n:bx)
        cout<<n;
    cout<<4867<<endl;
    //for(int j=0;j<i+2;j++)
    for(int j=0;j<i-2;j++)
    {
        cin>>bx[j];
    }
    for(double &n:bx)
        cout<<n<<" ";
    cout<<4867<<endl;
    for(int n:ax)
    {
        cout<<"a = "<<n<<endl;
    }
    cout<<"\n\n\n";
    for(int &n:ax)
    {
        cin>>n;
    }
    //cout<<n;
    cout<<"\n\n\n";
    for(int n:ax)
    {
        cout<<"a now = "<<n<<endl;
    }
    ax.push_back(30);
    cout<<"\n\n\n";

    for(int n:ax)
    {
        cout<<"a now2 = "<<n<<endl;
    }
    cout<<"\n\n\n";
    cout<<"size = "<<ax.size();

    ax.pop_back();
    cout<<"\n\n\n";
    cout<<"operator = "<<ax.operator[](2)<<"\n\n";
    cout<<"operator = "<<ax.operator[](4)<<"\n\n";
    cout<<"\n\n\nsize---- = "<<ax.size();
    cout<<"\n\n\nat = "<<ax.at(2);
    //cout<<"\n\n\nat = "<<ax.at(4);
    cout<<"\n\n\n";
    for(double &n:bx)
        cin>>n;
    //for(i=0;i<SIZE;i++)
    for(i=0;i<bx.size();i++)
    {
        cout<<"\nbx["<<i<<"]"<<" = "<<bx.at(i);
    }

    return 0;
}
