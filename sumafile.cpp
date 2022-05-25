#include <iostream>
#include <fstream>
#include <cstdlib>
using namespace std;
const int SIZE = 60;
int main_sumafile()
{
    char fileName[SIZE];
    ifstream InFile;
    cout << "Enter the name of data file: ";
    cin.getline(fileName, SIZE);
    cout << fileName << endl;
    InFile.open(fileName);
    if (!InFile.is_open()) {
        cout << "Could not open the file " << fileName << endl;
        cout << "Program terminating.\n";
        exit(EXIT_FAILURE);
    }
    double value;
    double sum = 0.0;
    int count = 0;
    InFile >> value;
    while (InFile.good()) {
        ++count;
        sum += value;
        InFile >> value;
    }
    if (InFile.eof())
        cout << "End of file reached:\n";
    else if (InFile.fail())
        cout << "Input terminated by data mismatch.\n";
    else
        cout << "Input terminated for unknown reason.\n";
    if (count == 0)
        cout << "No data processed.\n";
    else {
        cout << "Items read: " << count << endl;
        cout << "Sum: " << sum << endl;
        cout << "Average: " << sum / count << endl;
    }
    InFile.close();
    return 0;
}