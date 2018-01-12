#include <tuple>
#include<iostream>
#include<bits/stdc++.h>
#define MAX 100000 //maximum node
using namespace std;

tuple<int , int, string> pii();

vector  <pii> G[MAX]; //parallel vector to store costs;

int main()
{
    int edge=4,node1,node2,cost,i,j;
    string type;
    for(i = 1; i <= edge; i++)
    {
        cout<<"Enter edge node1-node2 & cost : ";
        scanf("%d %d %d", &node1, &node2, &cost);
        type="pre";
        G[node1].push_back(pii(node2, cost,type));
        G[node2].push_back(pii(node1, cost,type)); // only if bi-directional
    }

    return 0;
}

/*
tuple<string , string, int> findPerson() {
    return make_tuple("Joe", "Sixpack", 42);
}

int main(int, char**) {
    auto person = findPerson();
    cout << "Name: " << get<0>(person) << " " <<get<1>(person) << endl;

    cout << "Age: " << get<2>(person) << endl;
    int x=get<2>(person);
    cout<<x<<endl;
    return 0;
}
*/
