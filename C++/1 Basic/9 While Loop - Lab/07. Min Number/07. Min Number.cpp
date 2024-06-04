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
#include <climits> 

using namespace std;

int main()
{
	string input;

	int number;
	int maxNumber = INT_MAX;

	while (input != "Stop")
	{
		cin >> input;

		try { number = stoi(input); }
		catch (invalid_argument const& e)
		{
			break;
		}

		if (number < maxNumber) { maxNumber = number; }
	}

	cout << maxNumber;

	return 0;
}