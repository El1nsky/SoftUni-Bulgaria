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
	short numbers[100] = {};

	short input, even, odd;

	even = 0;
	odd = 0;

	cin >> input;

	for (short i = 0; i < input; i++)
	{
		cin >> numbers[i];

		if (numbers[i] % 2 == 0) even += numbers[i];
		else odd += numbers[i];

	}

	cout << even - odd;

	return 0;
}