#include <iostream>
int main_or()
{
	using namespace std;
	cout << "This program may reformat your hard disk\n"
		"and destroy all your data.\n"
		"Do you wish to continue? <y/n> ";
	char ch;
	cin >> ch;
	if (ch == 'Y' || ch == 'y')
		cout << "You were warned!\a\a\n";
	else if (ch == 'N' || ch == 'n')
		cout << "A wise choice ... bye\n";
	else
		cout << "That wasn't a y or n! Apparently you "
		"Can't follow\ninstructions, so "
		"I'll trash your disk anyway.\a\a\a\n";
	return 0;
}