#include <iostream>
#include <cmath>

//定义结构体 polar
struct polar
{
	double distance;
	double angle;
};

//定义结构体 rect
struct rect
{
	double x;
	double y;
};

//声明以polar为结构体的函数prototypes
polar rect_to_polar(rect xypos);
//声明无返回值函数show_polar
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

//创建polar结构体类型的函数rect_to_polar
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