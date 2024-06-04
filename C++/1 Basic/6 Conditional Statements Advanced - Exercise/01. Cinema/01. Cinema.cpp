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
	string projection; cin >> projection;

	short rows; cin >> rows;
	short columns; cin >> columns;
	float ticketP = 0.00;

	if (projection == "Premiere") ticketP = 12.00;
	else if (projection == "Normal") ticketP = 7.50;
	else ticketP = 5.00;

	cout << fixed << setprecision(2) << rows * columns * ticketP;

	return 0;
}