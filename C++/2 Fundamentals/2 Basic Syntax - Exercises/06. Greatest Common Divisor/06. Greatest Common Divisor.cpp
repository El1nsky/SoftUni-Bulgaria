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
	short a, b, GCD;

	GCD = 1;

	cin >> a >> b;

	while (true)
	{
		if (a == b) { GCD = a; break; }
		else if (a % 2 == 1 && b % 2 == 1) { GCD = 1; break; }
		else if (a % GCD == 0 && b % GCD == 0 && GCD != 1) { break; }
		else { GCD++; }
	}

	cout << abs(GCD);

	return 0;
}