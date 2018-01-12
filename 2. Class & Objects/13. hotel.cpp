#include<iostream>
#include<cstring>
using namespace std;
class book
{
public:
    int i,j,k;
    int n=0;
    int p;
    int id[20];
    double price[20];

    string name[20];
    string author[20];
    int input();
    int print();
    int search_data;
    int sort_data;
};
/*class in
{
public:
    book pass[20]
};*/
int book :: input()
{

    cout<<"How many book u wann add? ";
    cin>>p;
    for(i=0;i<p;i++)
    {
    cout<<"Enter book id : "<<endl;
    cin>>id[i];
    cout<<"Enter Book name : ";
    cin>>name[i];
    cout<<"Enter Author name : ";
    cin>>author[i];
    cout<<"Enter Price of the book : ";
    cin>>price[i];
    n++;
    }
}
int book :: print()
{
    cout<<"\n........................................................................"<<endl;
    cout<<"| no |   ID no   |     Book Name      |    Writer Name     |  Price  |"<<endl;
    cout<<"........................................................................"<<endl;

    for(i=0;i<p;i++)
    {
        //cout<<"| %2.0d |  %6.0d  |  %16s  |  %16s  |  %3.2f  |\n",i+1,pass[i].id,pass[i].name,pass[i].author,pass[i].price);
        cout<<(i+1)<<"\t"<<id[i]<<"\t"<<name[i]<<"\t"<<author[i]<<"\t"<<price[i]<<endl;
        cout<<"........................................................................\n";
    }
    return 0;
}
//int book :: search_data()
int main()
{
    book b;
    int choice;
    b.input();
    cout<<"Pick a option. \nInput=1\nprint=2\nsearch=3"<<endl;
    cin>>choice;
    switch(choice)
    {
        //case 1: b.input();
        case 2: b.print();
        case 3: b.search_data();
        case 4: b.sort_data();
        default:
            break;

    }
    return 0;
}
