#include <iostream>
char* buildstr(char c, int n);  //声明此方法
int main_strgback()
{
	using namespace std;
	int times;
	char ch;
	cout << "Enter a character: ";
	cin >> ch;
	cout << "Enter an integer: ";
	cin >> times;
	char *ps = buildstr(ch, times);
	cout << ps << endl;
	delete[] ps; //释放内存
	ps = buildstr('+', 20);
	cout << ps << "-Done-" << ps << endl;
	//delete[] ps;  //释放内存
	return 0;
}

char* buildstr(char c, int n)
{
	char* pstr = new char[n + 1];
	pstr[n] = '\0';
	while (n-- > 0)
		pstr[n] = c;
	return pstr;
}