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

	int days; cin >> days;

	double rakiyaA;
	double degrees;
	double totalRakiya = 0;
	double totalDegrees = 0;
	double degreesSum = 0;



	for (int i = 1; i <= days; i++)
	{
		cin >> rakiyaA;
		totalRakiya += rakiyaA;
		cin >> degrees;
		totalDegrees += degrees;
		degreesSum += rakiyaA * degrees;
	}
	degreesSum /= totalRakiya;

	cout << "Liter: " << totalRakiya << '\n'
		<< "Degrees: " << degreesSum << '\n';

	if (degreesSum < 38)
	{
		cout << "Not good, you should baking!";
	}
	else if (degreesSum >= 38 && degreesSum <= 42)
	{
		cout << "Super!";
	}
	else if (degreesSum > 42)
	{
		cout << "Dilution with distilled water!";
	}

		return 0;
}