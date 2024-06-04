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
	cout << fixed << setprecision(2);

	unsigned short daysA; cin >> daysA;

	unsigned short hours; cin >> hours;

	unsigned short daysCounter = 1;
	unsigned short hoursCounter = 1;

	double tax = 0;
	double totalTax = 0;

	for (unsigned short i = 1; i <= daysA; i++)
	{
		for (unsigned short j = 1; j <= hours; j++)
		{	
			if (daysCounter % 2 == 0 && hoursCounter % 2 == 1) { tax += 2.50; }
			else if (daysCounter % 2 == 1 && hoursCounter % 2 == 0) { tax += 1.25; }
			else { tax += 1; }
			hoursCounter++;
		}
		daysCounter++;
		cout << "Day: " << i << " - " << tax << " leva\n";
		hoursCounter = 1;
		totalTax += tax;
		tax = 0;
	}

	cout << "Total: " << totalTax << " leva";

	return 0;
}