#include <iostream>
#include <fstream>

int main_outfile()
{
	using namespace std;

	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outfile;   //����һ��ofstream����
	outfile.open("carinfo.txt");   //��������ļ�  ��of�롰carinfo.txt���ļ���������

	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);   //����automobile�ļ���ָ����ȡ�ַ�����49��
	cout << "Enter the model year: ";
	cin >> year;   //����yearֵ
	cout << "Enter the original asking price: ";
	cin >> a_price;   //����a_price��ֵ
	d_price = 0.913 * a_price;  

	// display infomation on screen with cout

	cout << fixed;
	cout.precision(2);
	cout.setf(ios_base::showpoint);
	cout << "Make and model: " << automobile << endl;
	cout << "Year: " << year << endl;
	cout << "Was asking $: " << a_price << endl;
	cout << "Now asking $: " << d_price << endl;

	// Now do exact same things uding outfile instead of cout

	outfile << fixed;
	outfile.precision(2);//���þ���
	outfile.setf(ios_base::showpoint); //ǿ����ʾС��������0
	outfile << "Make and model: " << automobile << endl;
	outfile << "Year: " << year << endl;
	outfile << "Was asking $: " << a_price << endl;
	outfile << "Now asking $: " << d_price << endl;

	outfile.close();
	return 0;
}