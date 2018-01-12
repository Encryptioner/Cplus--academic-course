#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream dataFile;
	float num=123.567;
	dataFile.open("cse6.txt", ios::out);
	if (!dataFile)
	{
		cout << "File open error!" << endl;
		//return;
	}
	else
    {
        cout << "File opened successfully.\n";
    }

	cout << "Now writing information to the file.\n";

	dataFile<<num<<endl;
	dataFile.precision(5);
	dataFile<<num<<endl;
    dataFile.precision(4);
    dataFile<<num<<endl;
    dataFile.precision(3);
    dataFile<<num<<endl;

    dataFile.close();

    return 0;
}
