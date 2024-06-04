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
	short hour; cin >> hour;
	string day; cin >> day;

	if (hour >= 10 & hour <= 18 & day != "Sunday")
	{
		cout << "open";
	}
	else { cout << "closed"; }

	return 0;
}