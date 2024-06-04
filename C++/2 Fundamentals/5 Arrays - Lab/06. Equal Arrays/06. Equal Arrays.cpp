#define _USE_MATH_DEFINES

#include <iostream>
#include <stdio.h>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cmath>
#include <math.h>
#include <numeric>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <list>
#include <map>
#include <climits> 
#include <stdlib.h>
#include <cctype>

using namespace std;

int main()
{
	short a[100] = {};
	short b[100] = {};
	short input, sumA, sumB;

	sumA = 0;
	sumB = 0;

	cin >> input;

	for (short i = 0; i < input; i++)
	{
		cin >> a[i];
		sumA += a[i];
	}

	for (short i = 0; i < input; i++)
	{
		cin >> b[i];
		sumB += b[i];
	}

	for (short i = 0; i < input; i++)
	{
		if (a[i] != b[i])
		{
			cout << "Arrays are not identical. Found difference at " << i << " index.";
			return 0;
		}
	}

	cout << "Arrays are identical. Sum: " << sumA;

	return 0;
}