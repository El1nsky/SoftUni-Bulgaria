#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	double recordSeconds; cin >> recordSeconds;
	double distanceM; cin >> distanceM;
	double timeSeconds; cin >> timeSeconds;

	double timeNeeded = distanceM * timeSeconds;
	double waterResistance = floor(distanceM / 15.00F) * 12.50F;
	double totalTime = timeNeeded + waterResistance;

	if (recordSeconds <= totalTime)
	{
		double fail = totalTime - recordSeconds;
		cout << "No, he failed! He was " << fixed << setprecision(2) << fail << " seconds slower.";
	}
	else
	{
		cout << "Yes, he succeeded! The new world record is " << fixed << setprecision(2) << totalTime << " seconds.";
	}

	return 0;
}
