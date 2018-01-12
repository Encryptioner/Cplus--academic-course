#include<iostream>
using namespace std;

class Counter
{
int count=10;
public:
// Allow clients to reset the counter to zero
void clear(int count)
{
     cout<<"count is "<<count<<endl;
     cout<<"this->count is "<<this->count<<endl;
     this->count = 5;//this indicates that count is a data member of this class. not of clear() FUNCTION
     //count = 5;
     cout<<"count from main = "<<this->count<<endl;
     //cout<<"count from main = "<<count<<endl;
}
// Allow clients to increment the counter
void inc()
{
     //cout<<"count from main = "<<this->count<<endl;
     this->count++;
}
// Return a copy of the counter's current value
int get()
{
     return this->count;
}
};

int main()
{
    Counter c;
    int n=12;
    c.clear(n);
    c.inc();

    cout<<"count = "<<c.get();//clear e this-> use na korle -1 return kore.. why??
    return 0;
}

