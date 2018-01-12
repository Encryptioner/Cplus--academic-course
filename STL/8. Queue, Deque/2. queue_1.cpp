#include<iostream>
#include<queue>

using namespace std;

int main()
{
    int array[]={5,6,7,8,9,10};
    queue<int>s;
    for(int i=0;i<5;i++)
    {
        s.push(array[i]);
    }
    while(!s.empty())
    {
        cout<<s.front();
        s.pop();
    }

    cout<<endl<<s.size();
}

