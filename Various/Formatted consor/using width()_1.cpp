#include <iostream>

using namespace std;

int main()
{
    int w=4;
    char s[10];

    //cin.width(5);
    cin>>s;
    cout<<s<<endl;

    while(cin>>s)
    {
        cout.width(w++);
        cout<<s<<endl;
        cin.width(5);
    }

    return 0;
}
