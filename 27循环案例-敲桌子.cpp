#include <iostream>
using namespace std;
int main27()
{
	//�����Ӱ���
	//�����1 - 100
	//��100���������ҵ��������� ����ӡ������

	for (int i = 1; i <= 100; i++)
	{
		//�����7�ı�������λ��7������ʮλ��7  ��ӡ������
		if (i % 7 ==0 || i % 10 ==0 || i/ 10 ==7)
		{
			cout << "������" << endl;
		}
		else
		{
			cout << i << endl;
		}
		


	}




	system("pause");

	return 0;
}