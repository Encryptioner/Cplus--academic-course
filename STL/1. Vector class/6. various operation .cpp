#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>

using namespace std;

class u
{
public:
    unsigned long id,generation;
    static unsigned long total_copies;
    u():id(0),generation(0){}
    u(unsigned long n):id(n),generation(0){}
    u(const u& z):id(z.id),generation(z.generation+1){
    ++total_copies;
    }
};
unsigned long u::total_copies=0;
int main()
{
    const int N=12;
    vector<int>v0(2);

    for(int i=0;i<N;i++)
    {
        v0.push_back(i);//v0 er present size er pore add kore.
        //v0[i]=i;
    }
    v0.insert(v0.begin()+5,10);
    for(int i=0;i<v0.size();i++)
    {
        cout<<v0[i]<<endl;
    }
    cout<<"\n";

    v0.erase(v0.begin());
    cout<<v0.front()<<endl<<endl;
    v0.erase(v0.begin()+5);
    for(int i=0;i<v0.size();i++)
    {
        cout<<v0[i]<<endl;
    }
    cout<<"\n";
    vector<int>::iterator j;
    j=find(v0.begin(),v0.end(),6);//za erase korte bola hoy ta zodi index e na thake tahole error dekhai.
    v0.erase(j--);//v0.erase(j++) not possible, j ekhon 6 er ager index
    //v0.erase(j,j+2);//j o tar porer ekta erase korbe
    for(int i=0;i<v0.size();i++)
    {
        cout<<v0[i]<<endl;
    }
    cout<<"\n";

    int n=100;
    vector<u>v1,v2;
    int k;
    for(k=0;k!=n;++k)
    {
        vector<u>::size_type cap=v1.capacity();
        v1.push_back(u(k));
        cout<<"k : "<<k<<" new capacity = "<<v1.capacity()<<" cap = "<<cap<<endl;
        if(v1.capacity()!=cap)//capacity returns the size of currently allocated block;
        {
            cout<<" k : "<<k<<" new capacity = "<<v1.capacity()<<" cap = "<<cap<<endl;
        }
    }
    v2.reserve(n);
    cout<<"now after reserve "<<n<<endl;
    for(k=0;k!=n;++k)
    {
        vector<u>::size_type cap=v2.capacity();
        v2.push_back(u(k));
        cout<<"k : "<<k<<" new capacity = "<<v2.capacity()<<" cap = "<<cap<<endl;
        if(v2.capacity()!=cap)//capacity returns the size of currently allocated block;
        {
            cout<<" k : "<<k<<" new capacity = "<<v2.capacity()<<" cap = "<<cap<<endl;
        }
    }
}
