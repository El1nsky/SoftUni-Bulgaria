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

	short input[arrayLength];
	for (short i = 0; i < arrayLength; ++i) { cin >> input[i]; }


	for (short i = 0; i < arrayLength; ++i)
	{
		bool isTopInteger = true;

		for (short j = i + 1; j < arrayLength; ++j)
		{
			if (input[i] <= input[j])
			{
				isTopInteger = false;
				break;
			}
		}

		if (isTopInteger) cout << input[i] << ' ';
	}

	return 0;
}