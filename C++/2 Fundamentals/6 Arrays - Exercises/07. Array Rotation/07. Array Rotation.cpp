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

int main()
{
	short arrayLength; cin >> arrayLength;

	short arr[arrayLength];
	int temp;

	for (short i = 0; i < arrayLength; ++i) { cin >> arr[i]; }

	short rotations; cin >> rotations;

	for (short i = 0; i < rotations; ++i)
	{
		temp = arr[0];

		for (short j = 0; j < arrayLength - 1; ++j) { arr[j] = arr[j + 1]; }

		arr[arrayLength - 1] = temp;
	}

	for (short i = 0; i < arrayLength; ++i) { cout << arr[i] << ' '; }

	return 0;
}