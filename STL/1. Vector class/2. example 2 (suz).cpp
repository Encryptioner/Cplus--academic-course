#include<iostream>
#include<vector>
#include <string>

using namespace std;

int main()
{
    int i,x;
    //vector<int>ax(x);
    string a;
    cout<<"Enter how many number u wanna input : "<<endl;
    cin>>x;
    cout<<"\n\n\n";
    vector<int>ax(x);
    vector<double>bx;// creates a zero length double vector..
    vector<double>cx(bx);// creates an double  vector from an double vector..
    vector<double>dx(2,3);
    vector<string>ex(0);

    //cin>>a;
int m=0;
    ex.push_back("gjhgjgjgjgg");

    cout<<ex.at(m)<<endl<<endl;
    m++;
    //cout<<ex.at(1)<<endl<<endl;
    //cout<<ex.at(2)<<endl<<endl;
cout<<"ex size = "<<ex.size()<<endl;
    cin>>a;

    ex.push_back(a);

    cout<<ex.at(0)<<endl<<endl;
    cout<<ex.at(m)<<endl<<endl;
    //cout<<ex.at(2)<<endl<<endl;
m++;

    cin>>a;

    ex.push_back(a);

    cout<<ex.at(0)<<endl<<endl;
    cout<<ex.at(1)<<endl<<endl;
    cout<<ex.at(m)<<endl<<endl;

    ex.pop_back();
    //m--;
    cout<<ex.at(0)<<endl<<endl;
    cout<<ex.at(1)<<endl<<endl;
    cout<<ex.at(m)<<endl<<endl;

    for(int &n:ax)
    {
        cin>>n;
    }

    cout<<"\n\n\n";
    for(int n:ax)
    {
        cout<<"a now = "<<n<<endl;
    }
    cout<<"\n\n\n";
    if(ax.empty())
    {
        cout<<"\nEMPTY\n\n";
    }
    ax.clear();
    if(ax.empty())
    {
        cout<<"\nEMPTY\n\n";
    }
    for(int n:ax)
    {
        cout<<"a now = "<<n<<endl;
    }
    /*for(double &n:cx(bx))
    {
        cin>>n;
    }*/
    cout<<"\n\n\n";
    for(double &n:dx)
    {
        cin>>n;
    }
    cout<<"\n\n\n";
    for(double n:dx)
    {
        cout<<n<<endl;
    }

    return 0;
}
