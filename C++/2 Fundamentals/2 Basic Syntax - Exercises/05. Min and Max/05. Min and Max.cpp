#define _USE_MATH_DEFINES

#include <iostream>
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

using namespace std;

int main()
{
	short n;
	cin >> n;

	short min = numeric_limits<short>::max();
	short max = numeric_limits<short>::min();

	for (short i = 0; i < n; ++i)
	{
		short input;
		cin >> input;

		if (input < min) min = input;
		if (input > max) max = input;
	}

	cout << min << ' ' << max;

	return 0;
}