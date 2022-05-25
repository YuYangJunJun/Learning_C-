#include <iostream>
using namespace std;
int main34()
{

	//利用冒泡排序做升序序列
	int arr[] = { 4,2,8,0,5,7,1,3,9 };

	cout << "排序前的结果：" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << arr[i];
	}
	cout << endl;

	//开始冒泡排序
	//总排序轮数为 元素个数 - 1
	for (int i = 0; i < 9 - 1; i++)
	{
		//内层循环对比 次数 = 元素个数-当前轮数-1
		for (int j = 0; j < 9 - i - 1; j++)
		{
			//如果第一个数比第二个数大，交换两个数字
			if (arr[j] > arr[j + 1])
			{
				int temp = arr[j];
				arr[j + 1] = arr[j];
				arr[j] = temp;
			}
		}
	}
	//输出排序后的结果
	cout << "排序后的结果：" << endl;
	for (int i = 0; i <= 9; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;


	system("pause");
	return 0;
}