#include <iostream>
const int ArSize1 = 8;
int sum_arr1(int arr[], int n);
int main_arrfun1()
{
	using namespace std;
	int cookies1[ArSize1] = {1, 2, 4, 8,16, 32, 64, 128};

	int sum = sum_arr1(cookies1, ArSize1);
	cout << "Total cookies eaten: " << sum << "\n";
	return 0;
}

int sum_arr1(int arr[], int n)
{
	int total = 0;
	for (int i = 0; i < n; i++)
		total = total + arr[i];
	return total;
}