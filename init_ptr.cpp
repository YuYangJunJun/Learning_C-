//�����嵥4.6  ��ʾ��ν�ָ���ʼ��Ϊһ����ַ��
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