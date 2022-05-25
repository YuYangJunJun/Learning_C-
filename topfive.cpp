#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;   //定义int 静态变量SIZE
//声明方法display
void display(const string sa[], int n);
int main_topfive()
{
	string list[SIZE];  //创建list数组大小为5
	cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "+1: " << i << endl;
		cout << i + 1 << ": ";
		getline(cin, list[i]);
		cout << "1+: " << i << endl;
	}
	cout << "Your list:\n";
	display(list, SIZE); //调用display方法
	return 0;
}

//创建display方法
void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
		cout << i + 1 << ": " << sa[i] << endl;
}