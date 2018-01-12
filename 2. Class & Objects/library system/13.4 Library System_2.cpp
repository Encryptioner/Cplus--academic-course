#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<iomanip>
#include<cstring>
#include<stdio.h>

using namespace std;

class Book
{
    char *title,*author,*publisher,ans;
    int price,get,get_get;

    public:
            Book()
            {
        title = new char[50];
        author = new char[50];
        publisher = new char[50];
        price = get = get_get = 0;
            }

        void getdata()
        {
            cout<<"\nEnter The Title";
            gets(title);
            cout<<"\nEnter The Author";
            gets(author);
            cout<<"\nEnter The Publisher";
            gets(publisher);
            cout<<"\nEnter The Price";
            cin>>price;
            cout<<"\nHow Much Number Of Books:";
            cin>>get;
        }

    void display()
    {
        cout<<setw(15)<<title<<setw(15)<<author<<setw(15)<<publisher<<setw(10)<<get
            <<setw(10)<<price;
    }

    void search(char search_title[],char search_author[])
    {
        if(strcmpi(author,search_author)==0)
        {
            if(strcmpi(title,search_title)==0)
            {
                cout<<"\nBook Found!";
                cout<<"\nEnter The getity: ";
                cin>>get_get;
                if(get_get <= get)
                {
                    cout<<"\nThe Title is: ";
                    puts(title);
                    cout<<"\nThe Author is: ";
                    puts(author);
                    cout<<"\nThe Publisher is: ";
                    puts(publisher);
                    cout<<"\nPrice Of Single Copy: "<<price;
                    cout<<"\nTotal Price = "<<price*get_get;
                    get = get - get_get;
                }

                else
                {
                    cout<<"\nSufficient book Not Available!";
                }
            }
        }
    }
};


int main()
{
Book obj[10];
int i=0,ch;

char author[50],title[50];

for(;;)
{
    cout<<"\n*******MENU********\n1)Enter Details\n2)Buy Book\n3)Display All Books\n4)Exit";
    cin>>ch;

    switch(ch)
    {
        case 1:
            obj[i].getdata();
            i++;
            break;

        case 2:
            cout<<"\nEnter The Authors Name: ";
            gets(author);
            cout<<"\nEnter The Title: ";
            gets(title);
            for(int j=0;j<i;j++)
            {
                obj[j].search(title,author);
            }

            break;

        case 3:
            cout<<setw(15)<<"TITLE"<<setw(15)<<"AUTHOR"<<setw(15)<<"PUBLISHER"<<setw(15)<<"Number Of Books"<<setw(15)<<"PRICE";
            cout<<"\n"<<setw(75)<<"-----------------------------------------------------------------------------------------------------";
            for(int j=0;j<i;j++)
            {
                cout<<"\n";
                obj[j].display();
            }

        case 4:
            exit(1);
    };
}
}
