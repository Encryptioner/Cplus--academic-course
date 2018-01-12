#include<iostream>
#include<fstream>
#include<string.h>

using namespace std;

int main()
{
    ofstream fout;
    fout.open("string1.txt");
    ifstream fin;
    fin.open("string.txt");

    char line[100];
    char ch;
    int count=0,i=0;

    int a[26];
    char b[26];

    for(int i=0;i<26;i++)
    {
            a[i]=0;
            b[i]='a'+i;
    }



    while(fin)
    {
        fin.get(line[i]);
        i++;
    }

    for(int i=0;line[i]!='\0';i++)
    {
        if(line[i]>='a'&&line[i]<='z')
            a[line[i]-'a']++;
        else if(line[i]>='A'&&line[i]<='Z')
            a[line[i]-'A']++;
    }

    fout<<"Frequency of  characters: "<<endl;

    for(i=0;i<26;i++)
    {
        if(a[i])
            fout<<b[i]<<"="<<a[i]<<endl;

    }


    cout<<"\nEnter an character to count: ";
    cin>>ch;

    for(int i=0; line[i]!='\0';i++)
    {
        if(line[i]==ch)
            count++;
    }

    fout<<"\nSearch item "<<ch<<" = "<<count<<endl;

  // sorting in ascending order

    for(int i=0;line[i]!='\0';i++)
    {
        for(int j=i+1;line[j]!='\0';j++)
        {
            if(line[i]>line[j])
            {
                swap(line[i],line[j]);
            }
        }
    }

    fout<<"\nAfter sorting\n\n"<<line<<endl;
    fout.close();
    fin.close();

    return 0;
}
