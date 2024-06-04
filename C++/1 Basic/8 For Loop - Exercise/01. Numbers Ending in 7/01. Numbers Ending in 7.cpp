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

using namespace std;

int main()
{
	for (int i = 1; i <= 1000; i++)
	{
		if (i % 10 == 7)
		{
			cout << i << '\n';
		}
	}

	return 0;
}