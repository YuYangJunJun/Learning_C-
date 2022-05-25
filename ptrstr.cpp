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
	cout << animal << " at " << (int*)animal << endl; //int*animal打印地址
	cout << ps << " at " << (int*)ps << endl;

	ps = new char[strlen(animal) + 1];
	strcpy(ps, animal);
	cout << "After using strcpy():\n";
	cout << animal << " at " << (int*)animal << endl;   //int*打印的是地址  char*打印的是值
	cout << ps << " at " << (int*)ps << endl;    //int*打印的是地址  char*打印的是值
	delete[] ps;
	return 0;
}