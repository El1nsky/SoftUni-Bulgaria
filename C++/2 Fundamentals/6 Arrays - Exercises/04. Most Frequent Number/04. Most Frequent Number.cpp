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
	short input[arrayLength];
	short frequency[10] = { 0 };
	short maxFrequency;

	for (short i = 0; i < arrayLength; ++i) { cin >> input[i]; }

	for (short i = 0; i < arrayLength; ++i) { frequency[input[i]]++; }

	maxFrequency = *max_element(frequency, frequency + 10);

	for (short i = 0; i < 10; ++i)
	{
		if (frequency[i] == maxFrequency)
		{
			cout << i << ' ';
		}
	}

	return 0;
}