#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <map>
#include <numeric>

using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	int groupsNum; cin >> groupsNum;

	int peopleInGroup;
	int musalaClimbers = 0;
	int monblanClimbers = 0;
	int kalimanjaroClimbers = 0;
	int K2Climbers = 0;
	int everestClimbers = 0;
	double totalClimbers = 0;

	for (int i = 0; i < groupsNum; i++)
	{
		cin >> peopleInGroup;

		totalClimbers += peopleInGroup;

		if (peopleInGroup <= 5) { musalaClimbers += peopleInGroup; }
		else if (peopleInGroup <= 12) { monblanClimbers += peopleInGroup; }
		else if (peopleInGroup <= 25) { kalimanjaroClimbers += peopleInGroup; }
		else if (peopleInGroup <= 40) { K2Climbers += peopleInGroup; }
		else { everestClimbers += peopleInGroup; }
	}

	
	cout << musalaClimbers / totalClimbers * 100 << "%\n";
	cout << monblanClimbers / totalClimbers * 100 << "%\n";
	cout << kalimanjaroClimbers / totalClimbers * 100 << "%\n";
	cout << K2Climbers / totalClimbers * 100 << "%\n";
	cout << everestClimbers / totalClimbers * 100 << "%";

	return 0;
}