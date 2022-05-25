#include <iostream>
const int ArSize = 6;
int main_and()
{
	using namespace std;
	float naaq[ArSize];
	cout << "Enter the NAAQs (New Age Awareness Quotients) "
		<< "of\nyour neighbors. Program terminates "
		<< "when you make\n" << ArSize << "entries "
		<< "or enter a negative value.\n";

	int i = 0;
	float temp;
	cout << "First value: ";
	cin >> temp;
	while (i < ArSize && temp >= 0)
	{
		naaq[i] = temp;
		++i;
		if (i < ArSize)
		{
			cout << "Next value: ";
			cin >> temp;
		}
	}

	if (i == 0)
		cout << "no data--bye\n";
	/*else
	{
		cout << "Enter your NAAQ: ";
		float you;
		cin >> you;
		int count = 0;
		for (int j = 0; j < i; j++)
			if (naaq[j] > you)

	}*/

	return 0;
}