#include <iostream>
#include <fstream>

using namespace std;
// Function prototype
void showState(fstream &);

int main()
{
	fstream testFile("cse9.dat", ios::out);
	if (testFile.fail())
	{
		cout << "cannot open the file.\n";
		//return;
	}

    int num = 10;
	cout << "Writing to the file.\n";
	testFile << num;			// Write the integer to testFile
	showState(testFile);
	testFile.close();			// Close the file
	testFile.open("cse9.dat", ios::in);	// Open for input
	if (testFile.fail())
	{
		cout << "cannot open the file.\n";
		//return;
	}
	cout << "Reading from the file.\n";
	showState(testFile);
    testFile >> num;		// Read the only number in the file
	cout << "Forcing a bad read operation.\n";
	testFile >> num;		// Force an invalid read operation
	showState(testFile);
	testFile.close();

	return 0;		// Close the file
}

// Definition of function ShowState. This function uses
// an fstream reference as its parameter. The return values of
// the eof(), fail(), bad(), and good() member functions are
// displayed. The clear() function is called before the function
// returns
void showState(fstream &file)
{
	cout << "File Status:\n";
	cout << "  eof bit: " << file.eof() << endl;
	cout << "  fail bit: " << file.fail() << endl;
	cout << "  bad bit: " << file.bad() << endl;
	cout << "  good bit: " << file.good() << endl;
	file.clear();	// Clear any bad bits
}
