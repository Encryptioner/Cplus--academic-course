#include <iostream>
#include <ctime>
#include <algorithm>
#include <vector>

using namespace std;

int binarySearch(int first, int last, int search4, vector<int>& random);

int main()
{
    int n,i;
    vector<int> random(100);
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>random[i];
    }

    int search4, found;
    int first = 0;
    int last = n;
    cin>>search4;
    found = binarySearch(first, last, search4, random);
    cout<<endl<<found<<endl;


    return(0);
}

int binarySearch(int first, int last, int search4, vector<int>& random)
{
    do
    {
        int mid = (first + last) / 2;
        if (search4 > (random)[mid])
            first = mid + 1;
        else if (search4 < (random)[mid])
            last = mid - 1;
        else
            return mid;
    } while (first <= last);

    return -(first + 1);
}
