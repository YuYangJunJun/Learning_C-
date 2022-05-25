#include <iostream>
#include <fstream>

int main_outfile()
{
	using namespace std;

	char automobile[50];
	int year;
	double a_price;
	double d_price;

	ofstream outfile;   //声明一个ofstream对象
	outfile.open("carinfo.txt");   //输出并打开文件  将of与“carinfo.txt”文件关联起来

	cout << "Enter the make and model of automobile: ";
	cin.getline(automobile, 50);   //输入automobile文件并指定获取字符个数49个
	cout << "Enter the model year: ";
	cin >> year;   //输入year值
	cout << "Enter the original asking price: ";
	cin >> a_price;   //输入a_price的值
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
	outfile.precision(2);//设置精度
	outfile.setf(ios_base::showpoint); //强制显示小数点后面的0
	outfile << "Make and model: " << automobile << endl;
	outfile << "Year: " << year << endl;
	outfile << "Was asking $: " << a_price << endl;
	outfile << "Now asking $: " << d_price << endl;

	outfile.close();
	return 0;
}