#include <iostream>
using namespace std;
int main28()
{

	//利用嵌套循环打印星图
	//打印一行星图
	//外层执行一次，内层执行一周
	for (int x = 0; x < 10; x++)
	{
		//内层循环
		for (int i = 0; i <= 10; i++)
		{
			cout << "* ";
		}
		cout << endl;
	}




	system("pause");
	return 0;
}