#include <iostream>
using namespace std;
int main21()
{

	//switch���
	//����Ӱ���д��
	//10 ~9�����Ӱ
	//8 ~ 7�ǳ���
	//6 ~ 5һ���
	//5����   ��Ƭ

	//��ʾ�û�����Ӱ����
	cout << "�����Ӱ��������" << endl;
	//�û���ʼ���д��
	int score = 0;
	cin >> score;
	cout << "���������Ϊ��" << score << endl;
	//�����û�����ķ�������ʾ�û����Ľ��
	switch (score)
	{
	case 10:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;//�˳���ǰ��֧
	case 9:
		cout << "����Ϊ�Ǿ����Ӱ" << endl;
		break;
	case 8:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 7:
		cout << "����Ϊ��Ӱ�ǳ���" << endl;
		break;
	case 6:
		cout << "����Ϊһ���" << endl;
		break;
	case 5:
		cout << "����Ϊһ���" << endl;
		break;
	default:
		cout << "����Ϊ����Ƭ" << endl;

	}

	//if �� switch����
	//switchȱ��   �ж�ʱ��ֻ�������ͻ����ַ��ͣ���������һ������
	//switch�ŵ㣬�ṹ������ִ��Ч�ʸ�







	system("pause");
	return 0;
}