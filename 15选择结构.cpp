#include <iostream>
using namespace std;
int main15()
{

	//选择结构 单行if语句

	//用户来输入分数，如果分数大于600，视为考上一本大学，在屏幕中输出


	//1、用户输入分数

	int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
	//2、打印用户输入的分数
	cout << "您输入的分数为：" << score << endl;
	//3、判断分数是否大于600，如果大于，那么输出
	//if条件后面，不要加分号
	if (score > 600)
	{
		cout << "恭喜您考上一本大学" << endl;
	}





	system("pause");
	return 0;
}