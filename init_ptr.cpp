//程序清单4.6  演示如何将指针初始化为一个地址。
#include <iostream>
int main_init_ptr()
{
	using namespace std;
	int higgens = 5;
	int* pt = &higgens;

	cout << "Value of higgens = " << higgens
		<< "; Address of higgens = " << &higgens << endl;
	cout << " Value of pt = " << *pt
		<< "; Value of pt = " << pt << endl;
	return 0;
}