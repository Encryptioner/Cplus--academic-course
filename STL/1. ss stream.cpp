#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main (void)
{
    stringstream ss;
    int n;
    string s1=" 6469 496";
    //int foo;
    string s2;
    ss<<s1;
    ss>>n;//this convert string to integer
    cout<<n<<endl;

    while (getline (cin, s1))
    {
        ss.clear ();
        ss.str ("");
        ss << s1;
        while (ss >> s2)//this convert sentence to word;
        {
            cout << s2 << endl;
        }
    }
return 0;
}

