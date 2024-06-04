#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>
#include <algorithm>
#include <map>
#include <numeric>
#include <climits> 

using namespace std;

int main()
{
	for (short hours = 0; hours <= 23; hours++)
	{
		for (int minutes = 0; minutes <= 59; minutes++)
		{
			cout << hours << ':' << minutes << '\n';
		}
	}

	return 0;
}