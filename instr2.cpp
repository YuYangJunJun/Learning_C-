#include <iostream>
int main_instr2()
{
	using namespace std;
	const int ArSize = 20;
	char name1[ArSize];
	char dessert[ArSize];

	cout << "Enter your name: \n";
	cin.getline(name1, ArSize);    // reads through newline
	cout << "Enter your favorite dessert: \n";
	cin.getline(dessert, ArSize);
	cout << "I have some delicious " << dessert;
	cout << " for you, " << name1 << endl;
	return 0;
}