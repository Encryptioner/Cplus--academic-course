#include <iostream>
using namespace std;

int main()
{
    int x=5,y;
    cin>>y;

    if(y<x)
    {
        goto error;//without this line program do the same
    }
    else
    {
        cout<<"\nOK!\n";
    }

    error:
        cout<<"!Error\n";

    main();

    return 0;
}
