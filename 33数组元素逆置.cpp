#include <iostream>
using namespace std;
int main33()
{

	//ʵ������Ԫ������

	//1����������
	int arr1[] = {1,3,2,5,4};
	cout << "��������ǰ��" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i];
	}
	cout << endl;
	//2��ʵ������
	//2.1��¼��ʵ�±��λ��
	// 2.2��¼�����±��λ��
	// 2.3��ʼ�±�������±��Ԫ�ػ���
	// 2.4��ʼλ��++ ����λ��--
	// 2.5ѭ��ִ��2.1������ֱ����ʼλ�� >= ����λ��
	int start = 0;  //��ʼ�±�
	int end = sizeof(arr1) / sizeof(arr1[0]) - 1;  //�����±�

	while (start < end)
	{
		//ʵ��Ԫ�ػ���
		int temp = arr1[start];
		arr1[start] = arr1[end];
		arr1[end] = temp;

		//�±����
		start++;
		end--;
	}
	//3����ӡ���ú������
	cout << "����Ԫ�����ú�" << endl;
	for (int i = 0; i < 5; i++)
	{
		cout << arr1[i];
	}
	cout << endl;
	system("pause");
	return 0;

}