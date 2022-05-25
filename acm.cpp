#include<iostream>
using namespace std;
long long a[100] = { 0 };
int main_acm()
{
	int i, m;
	a[1] = 1, a[2] = 2, a[3] = 4;
	for (i = 4; i <=100; i++)
	{
		a[i] = a[i - 1] * a[i - 2] * a[i - 3];
	}
	while (cin >> m && m)
	{
		cout << a[m] << endl;
	}
	return 0;
}