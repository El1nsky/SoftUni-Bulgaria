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
	cout << fixed << setprecision(2);

	float grade; cin >> grade;

	if (grade >= 3) { cout << "Passed!"; }
	else { cout << "Failed!"; }

	return 0;
}