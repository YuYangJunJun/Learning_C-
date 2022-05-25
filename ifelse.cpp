#include <iostream>
int main_ifelse()
{
	using namespace std;
	char ch;
	std::cout << "Type, and I shall repeat.\n";
	std::cin.get(ch);
	while (ch != '.')
	{
		if (ch == '\n')
			std::cout << ch;
		else
			std::cout << ++ch;
		std::cin.get(ch);
	}
	cout << "\nPlease excuse the slight confusion.\n";
	return 0;

}