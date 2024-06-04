#include <algorithm>
#include <array>
#include <cctype>
#include <chrono>
#include <climits>
#include <cmath>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <ostream>
#include <sstream>
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <stack>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>
#include <unordered_set>

#define _USE_MATH_DEFINES

using namespace std;

int militaryToMinutes(const string& str)
{
	char h1, h2;
	h1 = str[0];
	h1 -= '0';
	h2 = str[1];
	h2 -= '0';

	unsigned int hour, minute;
	hour = h1 * 10 + h2 * 1;

	minute = (str[2] - '0') * 10 + (str[3] - '0') * 1;

	return hour * 60 + minute;
}

int main()
{
	unsigned int busses, i; cin >> busses;  cin.ignore();

	vector<unsigned int> busDepartures;
	busDepartures.reserve(busses);

	for (i = 0; i < busses; i++)
	{
		string strMilitaryTime; cin >> strMilitaryTime;

		unsigned int curTime = militaryToMinutes(strMilitaryTime);
		busDepartures.push_back(curTime);
	}

	unsigned int trainDeparture;
	string trainDepartureStr;

	cin >> trainDepartureStr;
	trainDeparture = militaryToMinutes(trainDepartureStr);

	unsigned int bustBusDifference = INT_MAX;
	unsigned int bestBusIndex = 0;

	for (i = 0; i < busses; i++)
	{
		unsigned int carBusArrival = busDepartures[i];
		unsigned int difference;

		if (trainDeparture >= carBusArrival)
			difference = trainDeparture - carBusArrival;
		else
		{
			difference = (24 * 60) - carBusArrival;
			difference += trainDeparture;
		}

		if (difference < bustBusDifference)
		{
			bustBusDifference = difference;
			bestBusIndex = i + 1;
		}
	}

	cout << bestBusIndex;

	return 0;
}