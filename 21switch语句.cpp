#include <iostream>
using namespace std;
int main21()
{

	//switch语句
	//给电影进行打分
	//10 ~9经典电影
	//8 ~ 7非常好
	//6 ~ 5一般般
	//5以下   烂片

	//提示用户给电影评分
	cout << "请给电影进行评分" << endl;
	//用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "你给的评分为：" << score << endl;
	//根据用户输入的分数来提示用户最后的结果
	switch (score)
	{
	case 10:
		cout << "您认为是经典电影" << endl;
		break;//退出当前分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为电影非常好" << endl;
		break;
	case 7:
		cout << "您认为电影非常好" << endl;
		break;
	case 6:
		cout << "您认为一般般" << endl;
		break;
	case 5:
		cout << "您认为一般般" << endl;
		break;
	default:
		cout << "您认为是烂片" << endl;

	}

	//if 和 switch区别
	//switch缺点   判断时候只能是整型或者字符型，不可以是一个区间
	//switch优点，结构清晰，执行效率高







	system("pause");
	return 0;
}