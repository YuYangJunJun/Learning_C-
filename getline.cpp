#include <iostream>
using namespace std;
int main_getline()
{
	const int SIZE = 81;
	char sentence[SIZE];
	cout << "Enter a sentence: ";
	cin.getline(sentence, SIZE); //此方法只能获取第二个参数指定的字符个数
	cout << "You entered " << sentence << endl;
	return 0;
}