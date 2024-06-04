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

void smallestNumber();

int main()
{
	smallestNumber();

	return 0;
}

void smallestNumber()
{
	long int a, b, c, d;

	d;

	cin >> a >> b >> c;

	if (a <= b && a <= c) d = a;
	else if (b <= a && b <= c) d = b;
	else if (c <= a && c <= b) d = c;

	cout << d;
}