#include <iostream>
using namespace std;
int main17()
{

	//选择结构  多条件if语句

	//输入考试分数，如果大于600分，视为考上一本大学，在屏幕中输出
    //大于500，视为考上二本大学，屏幕输出
	//大于400，视为考上三本大学，屏幕输出
	//小于等于400，视为未考上本科生


	//用户输入分数
	int score = 0;
	cout << "请输入分数：" << endl;
	cin >> score;
	//输出用户分数
	cout << "您输入的分数为：" << score << endl;

	//判断
	//如果大于600，考上一本
    //如果大于500，考上二本
	//如果大于400，考上三本
	//如果小于400，未考上本科
	if (score > 600)
	{
		cout << "考上一本" << endl;
	}
	else if(score > 500)
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
	




	system("pause");
	return 0;
}