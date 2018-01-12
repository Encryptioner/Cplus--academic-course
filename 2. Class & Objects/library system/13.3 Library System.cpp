#include<cstring>
#include<iostream>
#include<cstdio>
using namespace std;

int i,j,m;
int n=0,p=0,k=0,d=0;

class library
{
private:
    int book_id,id;
    double price;
    //string book_name[20];
    string book_name;
    string author_name;
public:
    void get_data(int,int);
    int display();
    int sort_data();
    int sort_data_2();
    int search_data();
    int add_data(int,int);
    int delete_data(int);
}a[20],t;

void library :: get_data(int n,int p)
{
    if(p>0)
    {
        k=n;
    }

    for(i=k;i<n+p;i++)
    {
    cout<<"\nEnter book id_"<<i+1<<" : ";
    cin>>a[i].book_id; //how to get space??

    cout<<"\nEnter Book name_"<<i+1<<" : ";
    cin>>a[i].book_name;
    //getline(cin,a[i].book_name);
    //getchar();
    //getline(a[i].book_id);
    //std::getline(std :: cin,a[i].book_name,20);
    //cin.getline(a[i].book_name,20);
    //canf("%[^\n]%*c",a[i].book_name);
    cout<<"\nEnter Author name_"<<i+1<<" : ";
    cin>>a[i].author_name;
    cout<<"\nEnter Price of the book_"<<i+1<<" : ";
    cin>>a[i].price;
    }

    if(p!=0)
    {
        display();
        add_data(k,p);
    }
    else
    {
        display();
    }
}

int library :: display()
{
    cout<<"\n........................................................................"<<endl;
    cout<<"no\tID no\t  Book Name\t  Writer Name\t  Price  "<<endl;
    cout<<"........................................................................"<<endl;

    for(i=0;i<n;i++)
    {
        cout<<(i+1)<<"\t"<<a[i].book_id<<"\t"<<a[i].book_name<<"\t\t"<<a[i].author_name<<"\t\t"<<a[i].price<<endl;
        cout<<"........................................................................\n";
    }
    return 0;
}
int library :: sort_data()
{
    cout<<"\n\nSorting according to price.. Highest to lowest..\n\n";
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[j].price>a[i].price)
        {
            /*t=a[i];
            a[i]=a[j];
            a[j]=t;*/
            swap(a[i],a[j]);
        }
        }
    }
    display();
    return 0;
}

int library :: sort_data_2()
{
    cout<<"\n\nSorting according to id.. Lowest to Highest..\n\n";
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[j].book_id<a[i].book_id)
        {
            swap(a[i],a[j]);
        }
        }
    }
    display();
    return 0;
}

int library :: search_data()
{
    cout<<"\n\nEnter id no to search the book : ";
    cin>>id;
    for(i=0;i<n;i++)
    {
        if(a[i].book_id==id)
        {
            cout<<"\n........................................................................"<<endl;
            cout<<"ID no\t  Book Name\t  Writer Name\t  Price  "<<endl;
            cout<<"........................................................................"<<endl;
            cout<<a[i].book_id<<"\t"<<a[i].book_name<<"\t\t"<<a[i].author_name<<"\t\t"<<a[i].price<<endl;
            cout<<"........................................................................\n";
        }
    }
    return 0;
}

int library :: add_data(int k,int p)
{
    for(i=k;i<k+p;i++)
    {
        cout<<(i+1)<<"\t"<<a[i].book_id<<"\t"<<a[i].book_name<<"\t\t"<<a[i].author_name<<"\t\t"<<a[i].price<<endl;
        cout<<"........................................................................\n";
    }
    return 0;
}

int library :: delete_data(int d)
{
    int s=0;
    for(i=0;i<d;i++)
    {
        cout<<"Enter id no to delete_"<<i+1<<" : ";
        cin>>id;
        for(j=0;j<n;j++)
        {
            m=j;
            if(a[j].book_id==id)
            {
                //j=j-1;
                for(k=0;k<n-j-1;k++)
                {
                    a[m]=a[m+1];
                    m++;
                }
                //j=j-1;
                s++;
                //printf("\n\nTest....");
                break;
            }
            if(j==n-1)
            {
                printf("\n\nInvalid input....");
            }
        }
    }
    return s;
}

int main()
{
    library book;
    int choice;

    //freopen("library_6.txt","r",stdin);

    cout<<"How many book u wanna store in library? ";
    cin>>n;
    book.get_data(n,p);

    while(1)
    {
    cout<<"\n\nPick a option. \n  Delete previous input & start New input = 1\n  Display = 2\n  Sorting according to price = 3\n  Sorting according to id = 4\n  Search = 5\n  Add = 6\n  Delete = 7\n  EXIT = 8\n"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
            main();
            break;
        case 2:
            book.display();
            break;
        case 3:
            book.sort_data();
            break;
        case 4:
            book.sort_data_2();
            break;
        case 5:
            book.search_data();
            break;
        case 6:
            printf("Enter How many book u wanna add? ");
            scanf("%d",&p);
            book.get_data(n,p);
            n=n+p;
            p=0;
            k=0;
            break;
        case 7:
            printf("Enter How many book u wanna delete? ");
            scanf("%d",&d);
            k=book.delete_data(d);
            n=n-k;
            k=0;
            book.display();
            break;
        case 8:
            choice=0;
            break;
        default:
            cout<<"\nInvalid Input...\n";
            break;
    }
    if(choice==0)
    {
        break;
    }
    //break;
    }
    return 0;
}



