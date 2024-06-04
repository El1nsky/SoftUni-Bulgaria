#define _USE_MATH_DEFINES
#include <algorithm>
#include <array>
#include <cctype>
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
#include <climits>

using namespace std;

int main() 
{
	short arrayLength; cin >> arrayLength;
	short firstArray[arrayLength];
	short secondArray[arrayLength];
	short input[2];

	for (short i = 0; i < arrayLength; ++i)
	{
		cin >> input[0] >> input[1];

		if (i % 2 == 0)
		{
			firstArray[i] = input[0];
			secondArray[i] = input[1];
		}
		else
		{
			secondArray[i] = input[0];
			firstArray[i] = input[1];
		}
	}

	for (short i = 0; i < arrayLength; ++i) { cout << firstArray[i] << ' '; }

	cout << '\n';

	for (short i = 0; i < arrayLength; ++i) { cout << secondArray[i] << ' '; }

	return 0;
}