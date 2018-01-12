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
    int search_data();
    int sort_data();
};

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
    print();
}
int book :: print()
{
    cout<<"\n........................................................................"<<endl;
    cout<<"| no |   ID no   |     Book Name      |    Writer Name     |  Price  |"<<endl;
    cout<<"........................................................................"<<endl;

    for(i=0;i<p;i++)
    {
        cout<<(i+1)<<"\t"<<id[i]<<"\t"<<name[i]<<"\t"<<author[i]<<"\t"<<price[i]<<endl;
        cout<<"........................................................................\n";
    }
    return 0;
}
int book :: search_data()
{
    int d;
    cout<<"\nEnter id number to search: ";
    cin>>d;
    for(i=0;i<n;i++)
    {
        if(id[i]==d)
        {
            cout<<"\n........................................................................"<<endl;
            cout<<"| no |   ID no   |     Book Name      |    Writer Name     |  Price  |"<<endl;
            cout<<"........................................................................"<<endl;
            cout<<(i+1)<<"\t"<<id[i]<<"\t"<<name[i]<<"\t"<<author[i]<<"\t"<<price[i]<<endl;
            cout<<"........................................................................\n";
        }
    }
}
int book :: sort_data()
{
    int tid[20];
    string tname[20],tauthor[20];
    double tprice[20];
    int d;
    cout<<"\nsort in ascending order: ";
    //cin>>d;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(price[i]>price[j])
            {
                id[i]=tid[i];
                id[j]=id[j+1];
                id[j+1]=tid[j];

                name[j]=tname[i];
                name[j]=name[j+1];
                name[j+1]=tname[j];

                author[j]=tauthor[i];
                author[j]=author[j+1];
                author[j+1]=tauthor[j];

                price[j]=tprice[i];
                price[j]=price[j+1];
                price[j+1]=tprice[j];
            }
        }
        print();
    }

}
int main()
{
    book b,c;
    int choice;
    b.input();
    /*b.print();
    b.search_data();*/
    cout<<"Pick a option. \nInput=1\nprint=2\nsearch=3\nsorting=4"<<endl;
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

