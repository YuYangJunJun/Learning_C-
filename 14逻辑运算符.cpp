#include <iostream>
using namespace std;
int main14()
{
	//�߼������   ��    ��
	int a1 = 10;
	//��C++�� ����0 ��Ϊ��
	cout << !a1 << endl;

	cout << !!a1 << endl;

	//�߼������   ��  &&

	int a2 = 10;
	int b2 = 10;
	cout << (a2 && b2) << endl;

	a2 = 0;
	b2 = 10;

	cout << (a2 && b2) << endl;
	
	a2 = 0;
	b2 = 0;
	cout << (a2 && b2) << endl;

	//ͬ��Ϊ�棬����Ϊ��
	int a3 = 10;
	int b3 = 10;

	cout << (a3 || b3) << endl;

	a3 = 0;
	b3 = 10;
	cout << (a3 || b3) << endl;

	a3 = 0;
	b3 = 0;
	cout << (a3 && b3) << endl;

	//ͬ��Ϊ�٣�����Ϊ��



	//�߼������   ��  ||




	system("pause");
	return 0;
}