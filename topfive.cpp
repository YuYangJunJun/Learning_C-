#include <iostream>
#include <string>
using namespace std;
const int SIZE = 5;   //����int ��̬����SIZE
//��������display
void display(const string sa[], int n);
int main_topfive()
{
	string list[SIZE];  //����list�����СΪ5
	cout << "Enter your " << SIZE << " favorite astronomical sights:\n";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "+1: " << i << endl;
		cout << i + 1 << ": ";
		getline(cin, list[i]);
		cout << "1+: " << i << endl;
	}
	cout << "Your list:\n";
	display(list, SIZE); //����display����
	return 0;
}

//����display����
void display(const string sa[], int n)
{
	for (int i = 0; i < n; i++)
		cout << i + 1 << ": " << sa[i] << endl;
}