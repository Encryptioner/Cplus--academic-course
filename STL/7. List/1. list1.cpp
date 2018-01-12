#include<bits/stdc++.h>

using namespace std;

void print_list(string s)
{
    cout<<s<<endl;
}
int main()
{
    list<string>list1,list2;

    list1.insert(list1.end(),"Clark");
    list1.insert(list1.end(),"Bafgk");
    list1.insert(list1.end(),"Bjarane Stroustrup");
    list1.insert(list1.end(),"Clark");
    list1.insert(list1.end(),"Bafgk");
    list1.insert(list1.end(),"Bjarane Stroustrup");


    list2.insert(list2.end(),"Bafgk");
    list2.insert(list2.end(),"Bjarane Stroustrup");
    list2.insert(list2.end(),"Clark");
    list2.insert(list2.end(),"Hjarane");

    cout<<"List 1\n\n";
    for_each(list1.begin(),list1.end(),print_list);
    cout<<endl;

    cout<<"List 2\n\n";
    for_each(list2.begin(),list2.end(),print_list);
    cout<<endl;


    list<string>::iterator j,k,l;
    j=find(list1.begin(),list1.end(),"Bafgk");
    k=find(list2.begin(),list1.end(),"Bjarane Stroustrup");
    l=find(list2.begin(),list1.end(),"Hjarane");
    //list1.splice(j,list2);//insert list2 before "Bafgk"
    list1.splice(j,list2,k,l);
    //list1.erase(j++);
    for_each(list1.begin(),list1.end(),print_list);


    return 0;
}
