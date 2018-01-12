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

using namespace std;

int main()
{
    //list<char>list1=make<list<char>>("C++ is better than c");
    list<int>list1{1,2,3,4,85};
    deque<char>deque1{'u','n','i','n'};

    list<int>::iterator where=find(list1.begin(),list1.end(),4);
    list<int>::iterator next=where;
    ++next;
    assert(*where==4 && *next==85);//*(where+1) gives error in list. but ok in string and vector
    cout<<"OK\n";

    deque<char>::iterator wh=find(deque1.begin(),deque1.end(),'i');//where has previous use. so new iterator
    assert(*wh=='i' && *(wh+1)=='n');//wh-1 not accepted
    cout<<"OK\n";

    istream_iterator<char>in(cin);
    istream_iterator<char>eos;
    find(in,eos,'x');
    cout<<"First 'x' was "<<*(++in)<<endl;//++ na dile first/last char ashe
    return 0;
}
