#include <iostream>
const int Max = 3;
// function prototypes
int fill_array(double ar[], int limit);
void show_array(const double ar[], int n);
void revalue(double r, double ar[], int n);

int main_arrfun3()
{
	using namespace std;
	double proerties[Max];

	int size = fill_array(proerties, Max);
	show_array(proerties, size);
	if (size > 0)
	{
		cout << "Enter revaluation factor: ";
		double factor;
		while (!(cin >> factor))
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
			}
			cout << "Bad input; Please enter a number: ";
		}
		revalue(factor, proerties, size);
		show_array(proerties, size);
	}
	cout << "Done.\n";
	cin.get();
	cin.get();
	return 0;
}

// fill_array
int fill_array(double ar[], int limit)
{
	using namespace std;
	double temp;
	int i;
	for (i = 0; i < limit; i++)
	{
		cout << "Enter value #" << (i + 1) << ": ";
		cin >> temp;
		if (!cin) //bad input
		{
			cin.clear();
			while (cin.get() != '\n')
			{
				continue;
				cout << "Bad input; input process terminated.\n";
				break;
			}
		} 
		else if (temp < 0)
		{
			break;
		}
		ar[i] = temp;
	}
	return i;
}

//show_array
void show_array(const double ar[], int n)
{
	using namespace std;
	for (int i = 0; i < n; i++)
	{
		cout << "Property #" << (i + 1) << ": $";
		cout << ar[i] << endl;
	}
}

//revalue
void revalue(double r, double ar[], int n)
{
	for (int i = 0; i < n; i++)
	{
		ar[i] *= r;
	}
}