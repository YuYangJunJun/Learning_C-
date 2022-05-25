#include <iostream>
unsigned int c_in_str(const char* str, char ch);
int main_strfun()
{
	using namespace std;
	//创建char类型的数组
	char mmm[15] = "minimum";

	//创建char类型的字符串指针
	//char *wail = "ululate";    //这行在教材中印错了 编译不通过

	unsigned int ms = c_in_str(mmm, 'm');
	//unsigned int us = c_in_str(wail, 'u');   //这行在教材中印错了 编译不通过
	cout << ms << "m characters in " << mmm << endl;
	//cout << us << "u characters in " << wail << endl;   //这行在教材中印错了 编译不通过
	return 0;
}

unsigned int c_in_str(const char* str, char ch)
{
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
		str++;  //对指针进行操作
	}
	return count;
}