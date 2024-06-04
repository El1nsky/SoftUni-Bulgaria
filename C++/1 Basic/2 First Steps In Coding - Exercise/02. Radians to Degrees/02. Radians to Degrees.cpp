#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>

using std::cout;
using std::cin;
using std::endl;
using std::getline;
using std::ws;
using std::fixed;
using std::setprecision;
using std::string;

int main()
{
	//cout << "Radians to degrees: ";
	long double radians; cin >> radians;

	long double degrees = radians * 180.00F / M_PI;

	cout << round(degrees);

	return 0;

}