#include <iostream>
using namespace std;
int main30()
{

	//breakʹ��ʱ��


	//������switch�����
	cout << "��ѡ�񸱱����Ѷ�" << endl;
	cout << "��ͨ�Ѷ�" << endl;
	cout << "�е��Ѷ�" << endl;
	cout << "�����Ѷ�" << endl;

	int select = 0;   // ����ѡ�����ı���
	cin >> select;  //�ȴ��û�����

	switch (select)
	{
	case 1:
		cout << "��ͨ" << endl;
		break;
	case 2:
		cout << "�е�" << endl;
		break;
	case 3:
		cout << "����" << endl;
		break;
	default:
		break;
	}


	//������ѭ�������
	
	for (int i = 0; i < 10; i++)
	{
		//���i����5 �˳�ѭ�������ٴ�ӡ
		if (i == 5)
		{
			break;//�˳�ѭ��
		}

		cout << i << endl;
	}



	//������Ƕ��ѭ�������
	for (int x = 0; x < 10; x++)
	{
		for (int y = 0; y < 10; y++)
		{
			if (y == 5)
			{
				break;//�˳��ڲ�ѭ��
			}
			cout << " * ";
		}
		cout << endl;
	}






	system("pause");
	return 0;
}