#include <iostream>
using namespace std;
int main18()
{

	/*
	提示用户输入分数
	分数如果大于600，视为考上一本，大于500，视为考上二本，大于400，视为考上三本，其余视为未考上本科
	在一本分数线中，如果大于700分，考入北大，大于650，考入清华，大于600分考入人大
	*/
	//输入分数
	int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
	//打印用户输入分数
	cout << "您输入的分数为：" << score << endl;
	//判断
	if (score > 600)
	{
		cout << "考上一本" << endl;
		if (score > 700)
		{
			cout << "北大" << endl;
		}
		else if (score > 650)
		{
			cout << "清华" << endl;
		}
		else
		{
			cout << "人大" << endl;
		}
	}
	else if (score > 500)
	{
		cout << "考上二本" << endl;
	}
	else if (score > 400)
	{
		cout << "考上三本" << endl;
	}
	else
	{
		cout << "未考上本科" << endl;
	}

	//是否大于600 一本
	    //大于700 北大
		// 大于650 清华
		// 其余 人大
	//如果大于500 二本
	//如果大于400 三本
	//其余情况 未考上



	system("pause");
	return 0;
}