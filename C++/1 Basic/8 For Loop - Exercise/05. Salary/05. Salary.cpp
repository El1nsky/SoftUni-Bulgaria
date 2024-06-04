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
	short tabs; cin >> tabs;

	float salary; cin >> salary;

	string website;

	for (short i = 1; i <= tabs; i++)
	{
		getline(cin >> ws, website);

		if (website == "Facebook") { salary -= 150; }
		else if (website == "Instagram") { salary -= 100; }
		else if (website == "Reddit") { salary -= 50; }

		if (salary <= 0) { cout << "You have lost your salary."; return 0; }
	}

	cout << salary;

	return 0;
}