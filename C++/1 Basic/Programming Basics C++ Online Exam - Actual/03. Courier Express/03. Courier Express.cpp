#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cmath>
#include <math.h>
#include <numeric>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <list>
#include <map>
#include <climits> 
#include <stdlib.h>

using namespace std;

int main()
{
	cout << fixed;

	double shipmentKg; cin >> shipmentKg;

	string serviceType; cin >> serviceType;

	int distance; cin >> distance;

	double kmP = 0;

	double cost = 0;

	if (serviceType == "standard")
	{
		if (shipmentKg < 1) { cost = 0.03; }
		else if (shipmentKg >= 1 && shipmentKg <= 10) { cost = 0.05; }
		else if (shipmentKg >= 10 && shipmentKg <= 40) { cost = 0.10; }
		else if (shipmentKg >= 40 && shipmentKg <= 90) { cost = 0.15; }
		else if (shipmentKg >= 90 && shipmentKg <= 150) { cost = 0.20; }

		cout << "The delivery of your shipment with weight of " << setprecision(3) << shipmentKg << " kg. would cost " << setprecision(2) << cost * distance << " lv.";
	}
	else
	{
		if (shipmentKg < 1) { cost = 0.03 * 0.80; kmP = 0.03; }
		else if (shipmentKg >= 1 && shipmentKg <= 10) { cost = 0.05 * 0.40; kmP = 0.05; }
		else if (shipmentKg >= 10 && shipmentKg <= 40) { cost = 0.10 * 0.05; kmP = 0.10; }
		else if (shipmentKg >= 40 && shipmentKg <= 90) { cost = 0.15 * 0.02; kmP = 0.15; }
		else if (shipmentKg >= 90 && shipmentKg <= 150) { cost = 0.20 * 0.01; kmP = 0.20; }

		cout << "The delivery of your shipment with weight of " << setprecision(3) << shipmentKg << " kg. would cost " << setprecision(2) << (shipmentKg * cost * distance) + (distance * kmP) << " lv.";
	}

	return 0;
}