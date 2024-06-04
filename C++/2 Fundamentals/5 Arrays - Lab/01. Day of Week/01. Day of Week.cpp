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
	string days[] = { "Monday",
					  "Tuesday",
					  "Wednesday",
					  "Thursday",
					  "Friday",
					  "Saturday",
					  "Sunday" };

	short n; cin >> n;

	if (n >= 1 && n <= 7) cout << days[n - 1];
	else cout << "Invalid day!";

	return 0;
}