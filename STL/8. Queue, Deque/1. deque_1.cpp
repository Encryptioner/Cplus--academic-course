#include<iostream>
#include<deque>
#include<algorithm>
#include<iterator>
#include<cstring>

using namespace std;

template<typename container>
container make(const char s[])
{
    return container(&s[0],&s[strlen(s)]);
}

int main()
{
    deque<char>d1=make<deque<char>>("Bjarane Stroustrup"),d2;
    deque<char>::iterator i;
    for(int i=0;i<d1.size();i++)
    {
        cout<<d1[i];
    }
    cout<<endl;
    d1.push_front('c');
    for(int i=0;i<d1.size();i++)
    {
        cout<<d1[i];
    }
    cout<<endl;
    d1.push_back('c');
    d1.insert(d1.begin()+5,'S');
    for(int i=0;i<d1.size();i++)
    {
        cout<<d1[i];
    }
    cout<<endl;

}
