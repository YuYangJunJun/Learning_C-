#include <iostream>
using namespace std;
int main31()
{
	//continue

	for (int i = 0; i <= 100; i++)
	{
		if (i % 2 == 0)
		{
			continue;//可以筛选条件，执行到此不再向下执行，执行下一次循环
			//break会退出循环

		}
		cout << i << endl;

	}




	system("pause");
	return 0;
}