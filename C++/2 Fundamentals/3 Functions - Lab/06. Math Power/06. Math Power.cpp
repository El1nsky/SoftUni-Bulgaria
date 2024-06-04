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

int mathPower();

int main()
{
	cout << mathPower();

	return 0;
}

int mathPower()
{
	long int a, n, result;

	cin >> a >> n;

	result = pow(a, n);

	return result;
}