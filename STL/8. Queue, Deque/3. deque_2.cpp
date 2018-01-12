#include<iostream>
#include<deque>

using namespace std;

int main()
{
    int array[]={5,6,7,8,9,10};
    deque<int>s;
    for(int i=0;i<5;i++)
    {
        s.push_back(array[i]);
    }
    while(!s.empty())
    {
        cout<<s.front()<<" ";
        cout<<s.back()<<" ";
        s.pop_back();
    }

    cout<<endl<<s.size()<<endl;
    for(int i=0;i<5;i++)
    {
        s.push_front(array[i]);
    }
    while(!s.empty())
    {
        cout<<s.front();
        s.pop_front();
    }

    cout<<endl<<s.size();
}


