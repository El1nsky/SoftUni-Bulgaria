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
	float budged; cin >> budged;

	string season; cin >> season;

	string destination;
	string vacationType;

	if (budged <= 100)
	{
		destination = "Bulgaria";
		if (season == "summer") { budged -= budged * 0.70; vacationType = "Camp"; }
		else { budged -= budged * 0.30; vacationType = "Hotel"; }
	}
	else if (budged <= 1000)
	{
		destination = "Balkans";
		if (season == "summer") { budged -= budged * 0.60; vacationType = "Camp"; }
		else { budged -= budged * 0.20; vacationType = "Hotel"; }
	}
	else if (budged > 1000)
	{
		destination = "Europe";
		budged -= budged * 0.10;
		vacationType = "Hotel";
	}

	cout << "Somewhere in " << destination << '\n' << vacationType << " - " << fixed << setprecision(2); budged;

	return 0;
}

