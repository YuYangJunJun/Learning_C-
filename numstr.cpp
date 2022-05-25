// numstr.app -- following number input with line input
#include <iostream>
int mainnumstr()
{
	using namespace std;
	cout << "What year was your house buile?\n";
	int year;
	//cin >> year;
	(cin >> year).get();
	cout << "What is its street address?\n";
	char address[80];
	cin.getline(address, 80);
	cout << "Year built: " << year << endl;
	cout << "Address: " << address << endl;
	cout << "Done!\n";
	return 0;
}