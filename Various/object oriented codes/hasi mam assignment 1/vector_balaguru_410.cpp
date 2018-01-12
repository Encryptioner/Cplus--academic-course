#include<iostream>         //confusion in erase and insert in certain position
#include<vector>
using namespace std;

void display(vector<int>&a)
{
    for(int n:a)
        cout<<n<<" ";
    cout<<endl;
}
int main()
{
    int i;
    vector<int>a;
    cout<<"Initial size="<<a.size()<<endl;
    int x;
    cout<<"Enter 5 integer values:\n";
    for(i=0;i<5;i++)
    {
        cin>>x;
        a.push_back(x);
    }
    cout<<"Size after adding 5 values="<<a.size()<<endl;
    cout<<"\nCurent contents: ";
    display(a);
    cout<<"Add one more value: ";
    cin>>x;
    a.push_back(x);
    cout<<"Present size="<<a.size()<<endl;
    cout<<"\nCurent contents: ";
    display(a);
    cout<<"\nInsert element in a cerain position..\n";
    vector<int>::iterator itr=a.begin();
    itr=itr+3;
    a.insert(itr,1,9);  //inserts 9 after 3 elements
    cout<<"\nContents after inserting: ";
    display(a);
    cout<<"after removeing 2 elements from certain position: ";
    a.erase(a.begin()+3,a.begin()+5);
    display(a);

    return 0;
}
