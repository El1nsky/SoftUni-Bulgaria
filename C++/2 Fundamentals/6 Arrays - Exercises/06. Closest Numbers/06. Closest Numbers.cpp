#define _USE_MATH_DEFINES
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
#include <list>
#include <map>
#include <math.h>
#include <numeric>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <vector>

using namespace std;

int main()
{
	short arrayLength; cin >> arrayLength;
	if (arrayLength == 1) { cout << 0; return 0; }

	short arr[arrayLength];

	for (short i = 0; i < arrayLength; ++i) { cin >> arr[i]; }

	sort(arr, arr + arrayLength);

	short closest1 = arr[0];
	short closest2 = arr[1];
	short minDifference = abs(closest2 - closest1);

	for (short i = 1; i < arrayLength - 1; ++i)
	{
		short difference = abs(arr[i + 1] - arr[i]);
		if (difference < minDifference)
		{
			closest1 = arr[i];
			closest2 = arr[i + 1];
			minDifference = difference;
		}
	}

	cout << minDifference;

	return 0;
}