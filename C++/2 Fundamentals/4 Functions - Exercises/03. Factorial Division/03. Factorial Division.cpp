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

long double factorial_1(double a, double b, long double result)
{
	for (short i = 1; i <= a; i++)
	{
		result *= i;
	}

	return result;
}
long double factorial_2(double a, double b, long double result)
{
	for (short i = 1; i <= b; i++)
	{
		result *= i;
	}

	return result;
}

int main()
{
	cout << fixed << setprecision(2);

	double a, b;
	long double result = 1;

	cin >> a >> b;

	cout << abs(factorial_1(a, b, result) / factorial_2(a, b, result));

	return 0;
}