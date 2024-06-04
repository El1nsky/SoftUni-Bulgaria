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
#include <unordered_set>

using namespace std;

int main() {
	short arrayLength; cin >> arrayLength;
	short arr[arrayLength];
	short magicSum;

	for (short i = 0; i < arrayLength; ++i) { cin >> arr[i]; }

	cin >> magicSum;

	bool foundPair = false;

	for (short i = 0; i < arrayLength - 1; ++i)
	{
		for (short j = i + 1; j < arrayLength; ++j)
		{
			if (arr[i] + arr[j] == magicSum)
			{
				if (foundPair) { cout << ' ' << '\n'; }

				cout << arr[i] << ' ' << arr[j];
				foundPair = true;
			}
		}
	}

	if (!foundPair)
	{
		cout << 0;
	}

	return 0;
}