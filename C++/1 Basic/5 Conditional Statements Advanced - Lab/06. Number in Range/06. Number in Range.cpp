#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <list>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>
#include <map>

using namespace std;

int main()
{
	short number; cin >> number;

	if (number >= -100 & number <= 100 & number != 0) { cout << "Yes"; }
	else { cout << "No"; }

	return 0;
}