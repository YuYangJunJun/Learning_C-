#define _CRT_SECURE_NO_WARNING
#pragma warning(disable:4996)
#include <iostream>
#include <cstring>
int main_ptrstr()
{
	using namespace std;
	char animal[20] = "bear";
	const char* bird = "wren";
	char* ps;

	cout << animal << " and ";
	cout << bird << "\n";
	// cout << ps < "\n";

	cout << "Enter a kind of animal: ";
	cin >> animal;

	ps = animal;
	cout << ps << "!\n";
	cout << "Before using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl; //int*animal��ӡ��ַ
	cout << ps << " at " << (int*)ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;   //int*��ӡ���ǵ�ַ  char*��ӡ����ֵ
	cout << ps << " at " << (int*)ps << endl;    //int*��ӡ���ǵ�ַ  char*��ӡ����ֵ
	delete[] ps;
	return 0;
}