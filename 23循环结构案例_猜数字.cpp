#include <iostream>
using namespace std;
#include <ctime>
int main23()
{


	//添加随机数种子   利用当前系统时间生成的随机数，防止每次随机数都一样
	srand((unsigned int)time(NULL));
	//生成随机数
	int num = rand() % 100 + 1;  //生成0 + 1 ~ 99 + 1 随机数
	//cout << num << endl;

	//玩家进行猜测
	// 
	int value = 0;
	
	//判断玩家的猜测
	while (1)
	{
		cin >> value;

		if (value > num)
		{
			cout << "猜测过大" << endl;
		}
		else if (value < num)
		{
			cout << "猜测过小" << endl;
		}
		else
		{
			cout << "猜测正确" << endl;
			break;
		}
	}




	//猜对   退出游戏
	//猜错   提示猜的结果  过大或者过小   重新返回第二步








	system("pause");
	return 0;
}