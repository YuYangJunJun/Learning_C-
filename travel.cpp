#include <iostream>
struct travel_time  //����ṹ��
{
	int hours;
	int mins;
};
const int Mins_per_hr = 60;    //����һ��ֻ������

travel_time sum(travel_time t1, travel_time t2);  //����ṹ�巽��sum
void show_time(travel_time t);   //����һ���޷���ֵ�ĺ���

int main_travel()
{
	using namespace std;
	travel_time day1 = { 5, 45 };  //����һ���ṹ�����day1
	travel_time day2 = { 4, 55 };  //����һ���ṹ�����day2

	travel_time trip = sum(day1, day2);
	cout << "Two-day total: ";
	show_time(trip);

	travel_time day3 = { 4, 32 };
	show_time(sum(trip, day3));

	return 0;
}

//sum
travel_time sum(travel_time t1, travel_time t2)
{
	travel_time total;
	total.mins = ( t1.mins + t2.mins ) % Mins_per_hr;
	total.hours = t1.hours + t2.hours +
		(t1.mins + t2.mins) / Mins_per_hr;
	return total;
}

void show_time(travel_time t)
{
	using namespace std;
	cout << t.hours << " hours, "
		<< t.mins << " minutes\n";
}