#include <iostream>
#include <string.h>

using namespace std;

class Counter
{
private:
    int count;
public:
    Counter(){}

    Counter(int a)
    {
        count=a;
    }

    int get_count()
    {
        return count;
    }

    Counter operator+(Counter x)//look the similarity of +
    {
        Counter n;//look the similarity of declaration with Counter(){}
        n.count=count+x.count;
        return (n);
    }
};

int main(void)
{
    Counter c1(2), c2(3),c3;//look the similarity of parameter declaration in Counter(int a) function

    c3=c1+c2;//look the similarity of + in Counter operator+(Counter x) function

    cout<<"c3="<<c3.get_count();
}
