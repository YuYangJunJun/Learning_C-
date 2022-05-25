#include <iostream>
using namespace std;
int main16()
{

	//选择结构 - 多行if语句

	//输入考试分数，如果分数大于600，视为考上一本大学
	//如果没考上一本大学，打印未考上一本大学

	//输入考试分数
	int score = 0;
	cout << "请输入一个考试分数：" << endl;
	cin >> score;

	//提示用户输入的分数
	cout << "您输入的分数为：" << score << endl;


	//判断  如果大于600  打印考上一本  否则打印未考上一本
	if (score > 600)//大于600分执行下面大括号中的内容
	{
		cout << "恭喜您考上一本大学" << endl;
	}
	else//不大于600，执行下面括号的内容
	{
		cout << "未考上一本大学" << endl;
	}



	system("pause");
	return 0;
}