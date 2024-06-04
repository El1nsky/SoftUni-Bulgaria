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

int main() {
	short arrayLength; cin >> arrayLength;

	int arr[arrayLength];
	for (short i = 0; i < arrayLength; ++i) { cin >> arr[i]; }

	for (short i = 0; i < arrayLength; ++i)
	{
		for (short j = 0; j < arrayLength; ++j)
		{
			cout << arr[i] * arr[j] << ' ';
		}
	}

	return 0;
}