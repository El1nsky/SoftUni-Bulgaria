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
	short budged; cin >> budged;

	string season; cin >> season;

	short fishermenN; cin >> fishermenN;

	short shipRent = 0;
	float discount = 0.00;
	float totalCost = 0.00;

	if (season == "Spring")
	{
		shipRent = 3000;
		if (fishermenN <= 6)
		{
			discount += 0.90;
		}
		else if (fishermenN >= 7 && fishermenN <= 11)
		{
			discount += 0.85;
		}
		else if (fishermenN >= 12)
		{
			discount += 0.75;
		}
	}
	else if (season == "Summer" || season == "Autumn")
	{
		shipRent = 4200;
		if (fishermenN <= 6)
		{
			discount += 0.90;
		}
		else if (fishermenN >= 7 && fishermenN <= 11)
		{
			discount += 0.85;
		}
		else if (fishermenN >= 12)
		{
			discount += 0.75;
		}
	}
	else
	{
		shipRent = 2600;
		if (fishermenN <= 6)
		{
			discount += 0.90;
		}
		else if (fishermenN >= 7 && fishermenN <= 11)
		{
			discount += 0.85;
		}
		else if (fishermenN >= 12)
		{
			discount += 0.75;
		}
	}

	if (fishermenN % 2 == 0 && season != "Autumn") { discount *= 0.95; }

	totalCost = shipRent * discount;

	cout << fixed << setprecision(2);

	if (budged >= totalCost)
	{
		cout << "Yes! You have " << abs(totalCost - budged) << " leva left.";
	}
	else
	{
		cout << "Not enough money! You need " << abs(totalCost - budged) << " leva.";
	}
	return 0;
}

