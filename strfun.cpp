#include <iostream>
unsigned int c_in_str(const char* str, char ch);
int main_strfun()
{
	using namespace std;
	//����char���͵�����
	char mmm[15] = "minimum";

	//����char���͵��ַ���ָ��
	//char *wail = "ululate";    //�����ڽ̲���ӡ���� ���벻ͨ��

	unsigned int ms = c_in_str(mmm, 'm');
	//unsigned int us = c_in_str(wail, 'u');   //�����ڽ̲���ӡ���� ���벻ͨ��
	cout << ms << "m characters in " << mmm << endl;
	//cout << us << "u characters in " << wail << endl;   //�����ڽ̲���ӡ���� ���벻ͨ��
	return 0;
}

unsigned int c_in_str(const char* str, char ch)
{
	unsigned int count = 0;
	while (*str)
	{
		if (*str == ch)
			count++;
		str++;  //��ָ����в���
	}
	return count;
}