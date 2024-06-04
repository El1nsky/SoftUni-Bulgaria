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
	float a, b, c;

	cin >> a >> b >> c;

	char y;

	if (a * b * c >= 0) y = '+';
	else y = '-';

	cout << y;

	return 0;
}