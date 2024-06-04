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

	short n, sum;

	sum = 0;
	cin >> n;

	for (short i = 0; i < n; i++)
	{
		cin >> numbers[i];
		if (numbers[i] % 2 == 0) sum += numbers[i];
	}

	cout << sum;
}