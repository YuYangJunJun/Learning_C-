#include <iostream>
using namespace std;
#include <ctime>
int main23()
{


	//������������   ���õ�ǰϵͳʱ�����ɵ����������ֹÿ���������һ��
	srand((unsigned int)time(NULL));
	//���������
	int num = rand() % 100 + 1;  //����0 + 1 ~ 99 + 1 �����
	//cout << num << endl;

	//��ҽ��в²�
	// 
	int value = 0;
	
	//�ж���ҵĲ²�
	while (1)
	{
		cin >> value;

		if (value > num)
		{
			cout << "�²����" << endl;
		}
		else if (value < num)
		{
			cout << "�²��С" << endl;
		}
		else
		{
			cout << "�²���ȷ" << endl;
			break;
		}
	}




	//�¶�   �˳���Ϸ
	//�´�   ��ʾ�µĽ��  ������߹�С   ���·��صڶ���








	system("pause");
	return 0;
}