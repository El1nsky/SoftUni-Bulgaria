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
	string day; cin >> day;
	
	short ticketP = 0;

	if (day == "Monday" || day == "Tuesday" || day == "Friday")
	{
		ticketP += 12;
	}
	else if (day == "Wednesday" || day == "Thursday")
	{
		ticketP += 14;
	}
	else 
	{
		ticketP += 16;
	}

	cout << ticketP;

	return 0;
}