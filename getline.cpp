#include <iostream>
using namespace std;
int main_getline()
{
	const int SIZE = 81;
	char sentence[SIZE];
	cout << "Enter a sentence: ";
	cin.getline(sentence, SIZE); //�˷���ֻ�ܻ�ȡ�ڶ�������ָ�����ַ�����
	cout << "You entered " << sentence << endl;
	return 0;
}