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
	int number, sumEven, sumOdd, digit, product;

	sumEven = 0;
	sumOdd = 0;

	cin >> number;

	if (number < 0) number = abs(number);

	while (number > 0)
	{
		digit = number % 10;

		if (digit % 2 == 0) sumEven += digit;
		else sumOdd += digit;

		number /= 10;
	}

	product = sumEven * sumOdd;
	cout << product;

	return 0;
}