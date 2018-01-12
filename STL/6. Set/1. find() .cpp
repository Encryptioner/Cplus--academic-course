#include<iostream>
#include<istream>
#include<iterator>//
#include<string>
#include<cstring>
#include<vector>
#include<cassert>
#include<list>
#include<deque>
#include<algorithm>
#include<set>//????

using namespace std;

int main()
{
    int n;
    cin>>n;
    set<int>set1;

    for(int i:set1)
    {
        cin>>i;
    }
    printf("\n");
    for(int i:set1)
    {
        cout<<i<<endl;
    }
    set1.find(5);

    printf("\n");
}
