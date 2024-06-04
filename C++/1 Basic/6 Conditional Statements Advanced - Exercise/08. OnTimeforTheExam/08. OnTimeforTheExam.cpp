#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>
#include <map>

using namespace std;

int main()
{
	short exam_hours; cin >> exam_hours;
	short exam_minutes; cin >> exam_minutes;
	short arrival_hours; cin >> arrival_hours;
	short arrival_minutes; cin >> arrival_minutes;

	short total_exam_minutes = exam_hours * 60 + exam_minutes;
	short total_arrival_minutes = arrival_hours * 60 + arrival_minutes;
	short difference_in_minutes = total_exam_minutes - total_arrival_minutes;

	if (difference_in_minutes >= 0 && difference_in_minutes <= 30) 
	{
		cout << "On time\n" << difference_in_minutes << " minutes before the start\n";
	}
	else if (difference_in_minutes > 30) 
	{
		cout << "Early\n";

		if (difference_in_minutes >= 60) 
		{
			short hours = difference_in_minutes / 60;
			short minutes = difference_in_minutes - hours * 60;
			cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " hours before the start\n";
		}
		else 
		{
			cout << difference_in_minutes << " minutes before the start\n";
		}
	}
	else if (difference_in_minutes < 0) 
	{
		cout << "Late\n";
		difference_in_minutes = -difference_in_minutes;

		if (difference_in_minutes >= 60) 
		{
			short hours = difference_in_minutes / 60;
			short minutes = difference_in_minutes - hours * 60;
			cout << hours << ":" << (minutes < 10 ? "0" : "") << minutes << " hours after the start\n";
		}
		else 
		{
			cout << difference_in_minutes << " minutes after the start\n";
		}
	}

	return 0;
}