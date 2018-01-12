#include<iostream>
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
    char s[]="aeiou";//both list1 and s is in ascending order
    int l=strlen(s);

    list<char>list1{'b','c','d','f','g','h','j','k','l','m','n','p','q','r','s','t','v','w','x','y','z'};
    deque<char>deque1(26,'x');//26 copies of the letter x

    //merge(&s[0],&s[2],deque1.begin(),deque1.begin()+10,list1.begin());//we can merge a portion
    merge(&s[0],&s[l],list1.begin(),list1.end(),deque1.begin());//merge array s and list1, put result in deque1
    /*assert(deque1==deque<char>deque1{'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'});
    {
        cout<<"OK"<<endl;
    }*/
    for(int i=0;i<20;i++)
    {
        cout<<deque1[i];
        //cout<<list1[i];//can't be written like this for list
    }
    cout<<"\n";
    return 0;
}
