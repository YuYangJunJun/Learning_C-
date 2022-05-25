#include <iostream>
#include <string>   //用C++风格字符串的时候，要包含这个头文件
using namespace std;
int main6()
{
	
	//1、C风格字符串
    //注意事项   char 字符串名 []
	//注意事项2  等号后面要用双引号 包含起来字符串
	char str[] = "hello world";
	cout << str << endl;

	//2、C++风格的字符串
	//注意事项  包含头文件   #include <string>
	string str2 = "hello world";
	cout << str2 << endl;





	system("pause");
	return 0;
}