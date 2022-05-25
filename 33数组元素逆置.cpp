#include <iostream>
using namespace std;
int main33()
{

	//实现数组元素逆置

	//1、创建数组
	int arr1[] = {1,3,2,5,4};
	cout << "数组逆置前：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i];
	}
	cout << endl;
	//2、实现逆置
	//2.1记录其实下标的位置
	// 2.2记录结束下标的位置
	// 2.3起始下标与结束下标的元素互换
	// 2.4起始位置++ 结束位置--
	// 2.5循环执行2.1操作，直到起始位置 >= 结束位置
	int start = 0;  //起始下标
	int end = sizeof(arr1) / sizeof(arr1[0]) - 1;  //结束下标

	while (start < end)
	{
		//实现元素互换
		int temp = arr1[start];
		arr1[start] = arr1[end];
		arr1[end] = temp;

		//下标更新
		start++;
		end--;
	}
	//3、打印逆置后的数组
	cout << "数组元素逆置后：" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i];
	}
	cout << endl;
	system("pause");
	return 0;

}