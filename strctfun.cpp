#include <iostream>
#include <cmath>

//����ṹ�� polar
struct polar
{
	double distance;
	double angle;
};

//����ṹ�� rect
struct rect
{
	double x;
	double y;
};

//������polarΪ�ṹ��ĺ���prototypes
polar rect_to_polar(rect xypos);
//�����޷���ֵ����show_polar
void show_polar(polar dapos);

int main_strctfun()
{
	using namespace std;
	rect rplace;
	polar pplace;

	cout << "Enter the x and value: ";
	while (cin >> rplace.x >> rplace.y)  //
	{
		pplace = rect_to_polar(rplace);
		show_polar(pplace);
		cout << "Next two numbers (q to quit): ";
	}
	cout << "Done.\n";
	return 0;
}

//����polar�ṹ�����͵ĺ���rect_to_polar
polar rect_to_polar(rect xypos)
{
	using namespace std;
	polar answer;
	answer.distance =
		sqrt( xypos.x * xypos.x + xypos.y * xypos.y );
	answer.angle = atan2(xypos.y, xypos.x);
	return answer;
}

void show_polar(polar dapos)
{
	using namespace std;
	const double Rad_to_deg = 57.29577951;

	cout << "distance = " << dapos.distance;
	cout << ", angle = " << dapos.angle * Rad_to_deg;
	cout << " degrees\n";
}