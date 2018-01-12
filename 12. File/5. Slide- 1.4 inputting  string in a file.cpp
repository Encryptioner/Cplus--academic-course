#include <iostream>
#include <fstream>

using namespace std;

int main()
{
	fstream dataFile;
	char line[81];

	dataFile.open("cse5.txt", ios::out);
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

	dataFile << "Jones lnln\n";
	dataFile << "Smith\n";
	dataFile << "Willis\n";
	dataFile << "Davis\n";

	//dataFile.close();

	cout << "Done.\n";

	return 0;
}
