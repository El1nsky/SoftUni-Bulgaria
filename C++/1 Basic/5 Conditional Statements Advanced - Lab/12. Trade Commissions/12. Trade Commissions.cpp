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
	string city; cin >> city;
	double sales; cin >> sales;
	float commission = 0.00;

	if (sales >= 0)
	{
		if (city == "Sofia")
		{
			if (sales <= 500) commission = 0.05;
			else if (sales <= 1000) commission = 0.07;
			else if (sales <= 10000) commission = 0.08;
			else commission = 0.12;
		}
		else if (city == "Varna")
		{
			if (sales <= 500) commission = 0.045;
			else if (sales <= 1000) commission = 0.075;
			else if (sales <= 10000) commission = 0.10;
			else commission = 0.13;
		}
		else if (city == "Plovdiv")
		{
			if (sales <= 500) commission = 0.055;
			else if (sales <= 1000) commission = 0.08;
			else if (sales <= 10000) commission = 0.12;
			else commission = 0.145;
		}
	}

	if (commission > 0)
	{
		cout << fixed << setprecision(2) << sales * commission;
	}
	else {
		cout << "error";
	}

	return 0;
}