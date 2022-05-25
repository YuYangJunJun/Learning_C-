#include <iostream>
const int Cities = 5;
const int Year = 4;
int main_nexted()
{
	using namespace std;
	//使用字符串指针数组
	const char* cities[Cities] =
	{
		"Gribble City",
		"Gribbletowm",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};

	//使用char数组的数组 使用这两种方法都可
	/*char cities[Cities][25] =
	{
		"Gribble City",
		"Gribbletowm",
		"New Gribble",
		"San Gribble",
		"Gribble Vista"
	};*/

	int maxtemps[Year][Cities] =
	{
		{96, 100, 87, 101, 105},
		{96, 98, 91,107, 104},
		{97, 101, 93, 108, 107},
		{98, 103, 95, 109, 108}
	};

	cout << "Maximum temperatures for 2008 - 2011\n\n";
	for (int city = 0; city < Cities; city++)
	{
		cout << cities[city] << ":\t";
		for (int year = 0; year < Year; year++)
		{
			cout << maxtemps[year][city] << "\t";
		}
		cout << endl;
	}
	return 0;

}