#include <iostream>
using namespace std;
int main14()
{
	//逻辑运算符   非    ！
	int a1 = 10;
	//在C++中 除了0 都为真
	cout << !a1 << endl;

	cout << !!a1 << endl;

	//逻辑运算符   与  &&

	int a2 = 10;
	int b2 = 10;
	cout << (a2 && b2) << endl;

	a2 = 0;
	b2 = 10;

	cout << (a2 && b2) << endl;
	
	a2 = 0;
	b2 = 0;
	cout << (a2 && b2) << endl;

	//同真为真，其余为假
	int a3 = 10;
	int b3 = 10;

	cout << (a3 || b3) << endl;

	a3 = 0;
	b3 = 10;
	cout << (a3 || b3) << endl;

	a3 = 0;
	b3 = 0;
	cout << (a3 && b3) << endl;

	//同假为假，其余为真



	//逻辑运算符   或  ||




	system("pause");
	return 0;
}