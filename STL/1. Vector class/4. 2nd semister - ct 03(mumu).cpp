#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<int>list{2,3,1,14,4};
    int x=2;

    cout<<list[x]<<endl;
    cout<<list.size()<<endl;
    if(list.empty())
    {
        cout<<"True"<<endl;
    }
    else
    {
        cout<<"False"<<endl;
    }

    cout<<list.at(3)<<endl;
    cout<<list[list.size()-1]<<endl;

    return 0;
}
