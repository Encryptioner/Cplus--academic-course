#include<iostream>
#include<stack>

using namespace std;

int main()
{
    int array[]={5,6,7,8,9,10};
    stack<int>s;
    for(int i=0;i<5;i++)
    {
        s.push(array[i]);
    }
    while(!s.empty())
    {
        cout<<s.top();
        s.pop();
    }

    cout<<endl<<s.size();
}
