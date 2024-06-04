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
	int dailyGoal; cin >> dailyGoal;
	string input;

	double serviceCost = 0;

	while (input != "closed")
	{
		getline(cin >> ws, input);

		if (input == "haircut")
		{
			getline(cin >> ws, input);

			if (input == "mens") { serviceCost += 15; }
			else if (input == "ladies") { serviceCost += 20; }
			else { serviceCost += 10; }
		}
		else if (input == "color")
		{
			getline(cin >> ws, input);

			if (input == "touch up") { serviceCost += 20; }
			else { serviceCost += 30; }
		}

		if (serviceCost >= dailyGoal)
		{
			cout << "You have reached your target for the day!\nEarned money: " << serviceCost << "lv.";
			return 0;
		}
	}

	cout << "Target not reached! You need " << dailyGoal - serviceCost << "lv. more.\nEarned money: " << serviceCost << "lv.";
	return	0;
}