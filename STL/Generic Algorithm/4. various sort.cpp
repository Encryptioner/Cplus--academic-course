#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>


using namespace std;

class comp_last
{
public:
    bool operator()(int x,int y)
    {
        return x%10<y%10;
    }
};
int main()
{
    const int N=20;
    vector<int>v0;
    for(int i=0;i<N;i++)
    {
        v0.push_back(i);
    }
    vector<int>v1=v0;
    ostream_iterator<int> out(cout," ");
    cout<<"Before Sorting : \n";
    copy(v1.begin(),v1.end(),out);
    cout<<endl;

    sort(v1.begin(),v1.end(),comp_last());//worst : O(N^2), average : O(Nlog N)
    cout<<"After Sorting : \n";
    copy(v1.begin(),v1.end(),out);
    cout<<endl<<endl;

    v1=v0;
    stable_sort(v1.begin(),v1.end(),comp_last());//worst : O(N(log N)^2), average : O(Nlog N)
    cout<<"After Sorting by last digits with stable_sort : \n";
    copy(v1.begin(),v1.end(),out);
    cout<<endl<<endl;

    v1=v0;
    partial_sort(v1.begin(),v1.begin()+10,v1.end(),greater<int>());//sort in descending order
    cout<<"After Sorting 1st 10 element by partial sort : \n";
    copy(v1.begin(),v1.end(),out);
    cout<<endl<<endl;

    v1=v0;
    reverse(v1.begin(),v1.end());
    cout<<"Before Sorting : \n";
    copy(v1.begin(),v1.end(),out);
    cout<<endl;

    partial_sort(v1.begin(),v1.begin()+5,v1.end(),comp_last());//O(Nlog K), K=middle-first, N=last-first
    cout<<"After Sorting  with partial_sort to get 5 values with smallest last digits : \n";
    copy(v1.begin(),v1.end(),out);
    cout<<endl<<endl;

    nth_element(v1.begin(),v1.begin()+10,v1.end());
    cout<<"After Sorting such a way that all value of n- position<n position, n+>n : \n";
    copy(v1.begin(),v1.end(),out);
    cout<<endl<<endl;
}
