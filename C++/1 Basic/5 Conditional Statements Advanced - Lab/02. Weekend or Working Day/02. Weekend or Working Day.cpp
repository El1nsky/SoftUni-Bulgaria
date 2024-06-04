#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	string dayOfWeek; getline(cin, dayOfWeek);

	if (dayOfWeek == "Monday"
		|| dayOfWeek == "Tuesday"
		|| dayOfWeek == "Wednesday"
		|| dayOfWeek == "Thursday"
		|| dayOfWeek == "Friday")
	{
		cout << "Working day";
	}
	else if (dayOfWeek == "Saturday"
			|| dayOfWeek == "Sunday")
	{
		cout << "Weekend";
	}
	else
	{
		cout << "Error";
	}

	return 0;
}


