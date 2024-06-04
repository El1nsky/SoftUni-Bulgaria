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
	int number; cin >> number;


	int sumNumbers = 0;
	int addNumbers;

	while (sumNumbers <= number)
	{
		cin >> addNumbers;

		sumNumbers += addNumbers;

		if (sumNumbers >= number) { break; }
	}

	cout << sumNumbers;

	return 0;
}