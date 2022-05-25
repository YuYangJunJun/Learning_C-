#include <iostream>
int main_statement_blocks()
{
	using namespace std;
	int x = 20;
	{
		int y = 100;
		cout << x << endl;
		cout << y << endl;
	}
	cout << x << endl;
	//cout << y << endl;   //此值已不存在
	return 0;
}

int main_1()
{
	using namespace std;
	int x = 20;
	{
		cout << x << endl;
		int x = 100;
		cout << x << endl;
	}
	cout << x << endl;
	return 0;
}