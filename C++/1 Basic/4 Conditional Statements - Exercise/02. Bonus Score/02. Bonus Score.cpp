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
	short number; cin >> number;

	float points = 0.0F;


	if (number <= 100) { points = 5; }

	else if (number > 1000) { points = number * 0.1; }

	else { points = number * 0.2; }

	if (number % 2 == 0) { points++; }

	else if (number % 10 == 5) { points += 2; }

	cout << points << "\n" << number + points;

	return 0;
}