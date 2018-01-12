#include<iostream>
using namespace std;

class Counter
{
int count;
public:
// Allow clients to reset the counter to zero
void clear()
{
     count = 0;
}
// Allow clients to increment the counter
void inc()
{
     count++;
}
// Return a copy of the counter's current value
int get()
{
     return count;
}
};

int main()
{
    Counter c;
    c.clear();
    c.inc();

    cout<<"count = "<<c.get();
    return 0;
}
