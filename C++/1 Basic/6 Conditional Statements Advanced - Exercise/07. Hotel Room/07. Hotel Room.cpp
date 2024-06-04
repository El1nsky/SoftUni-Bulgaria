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
	string month; cin >> month;

	short standings; cin >> standings;

	float studioP;
	float apartmentP;
	float totalCostApartment = 0;
	float totalCostStudio = 0;

	if (month == "May" || month == "October")
	{
		studioP = 50;
		apartmentP = 65;
		if (standings > 14) { studioP *= 0.70; }
		else if (standings > 7) { studioP *= 0.95; }
	}
	else if (month == "June" || month == "September")
	{
		studioP = 75.20;
		apartmentP = 68.70;
		if (standings > 14) { studioP *= 0.80; }
	}
	else
	{
		studioP = 76;
		apartmentP = 77;
	}

	if (standings > 14) { apartmentP *= 0.90; }

	totalCostApartment = apartmentP * standings;
	totalCostStudio = studioP * standings;

	cout << fixed << setprecision(2);
	cout << "Apartment: " << totalCostApartment << " lv.\n"
		 << "Studio: " << totalCostStudio << " lv.";

	return 0;
}

