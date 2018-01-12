#include <iostream>
using namespace std;

int main()
{
    int age=5,guess;

    do {
	cout << "Guess my age: ";
	cin >> guess;
    }
    while (guess!=age);
    cout<<"\nRight!\n";

    return 0;
}
