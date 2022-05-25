#include <iostream>
using namespace std;
int main30()
{

	//break使用时机


	//出现在switch语句中
	cout << "请选择副本的难度" << endl;
	cout << "普通难度" << endl;
	cout << "中等难度" << endl;
	cout << "炼狱难度" << endl;

	int select = 0;   // 创建选择结果的变量
	cin >> select;  //等待用户输入

	switch (select)
	{
	case 1:
		cout << "普通" << endl;
		break;
	case 2:
		cout << "中等" << endl;
		break;
	case 3:
		cout << "炼狱" << endl;
		break;
	default:
		break;
	}


	//出现在循环语句中
	
	for (int i = 0; i < 10; i++)
	{
		//如果i等于5 退出循环，不再打印
		if (i == 5)
		{
			break;//退出循环
		}

		cout << i << endl;
	}



	//出现在嵌套循环语句中
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			if (y == 5)
			{
				break;//退出内层循环
			}
			cout << " * ";
		}
		cout << endl;
	}






	system("pause");
	return 0;
}