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
	short  stands; cin >> stands;

	string roomType; getline(cin >> ws, roomType);

	string rating; cin >> rating;

	float standsP;
	float discount;

	stands -= 1;

	if (roomType == "room for one person")
	{
		standsP = 18;
	}
	else if (roomType == "apartment")
	{
		standsP = 25;
		if (stands >= 10 && stands <= 15) { discount = 0.65; }
		else if (stands > 15) { discount = 0.50; }
		else if (stands < 10) { discount = 0.70; }
	}
	else
	{
		standsP = 35;
		if (stands >= 10 && stands <= 15) { discount = 0.85; }
		else if (stands > 15) { discount = 0.80; }
		else if (stands < 10) { discount = 0.90; }
	}

	if (roomType == "room for one person") { standsP *= stands; }
	else { standsP = standsP * stands * discount; }

	if (rating == "positive") { standsP += standsP * 0.25; }
	else { standsP *= 0.90; }

	cout << fixed << setprecision(2) << standsP;

	return 0;
}