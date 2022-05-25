#include <iostream>
#include <cmath>

//����polar�ṹ��
struct polar
{
	double distance;
	double angle;
};

//����rect�ṹ��
struct rect
{
	double x;
	double y;
};

//��������rect_to_polar
void rect_to_polar(const rect* pxy, polar* pda);
void show_polar(const polar* pda);

int main_strctptr()
{
	using namespace std;
	rect rplace;
	polar pplace;

	cout << "Enter the x and y value: ";
	while (cin >> rplace.x >> rplace.y)
	{
		rect_to_polar(&rplace, &pplace);
		show_polar(&pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
	return 0;
}

//����rect_to_polar����
void rect_to_polar(const rect* pxy, polar* pda)
{
	using namespace std;
	pda->distance =
		sqrt(pxy->x * pxy->y + pxy->x * pxy->y);
	pda->angle = atan2(pxy->y, pxy->x);
}

//����show_polar����
void show_polar(const polar* pda)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << pda->distance;
	cout << ", angle = " << pda->angle * Rad_to_deg;
	cout << " degress\n";
}