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
	short n; cin >> n;

	short number = 0;
	float p1 = 0;
	float p2 = 0;
	float p3 = 0;
	float p4 = 0;
	float p5 = 0;

	for (short i = 0; i < n; i++)
	{
		cin >> number;

		if (number < 200) { p1++; }
		else if (number >= 200 && number <= 399) { p2++; }
		else if (number >= 400 && number <= 599) { p3++; }
		else if (number >= 600 && number <= 799) { p4++; }
		else if (number >= 800) { p5++; }


	}

	cout << fixed << setprecision(2);

	cout << p1 / n * 100 << "%" << '\n'
		 << p2 / n * 100 << "%" << '\n'
		 << p3 / n * 100 << "%" << '\n'
		 << p4 / n * 100 << "%" << '\n'
		 << p5 / n * 100 << "%" << '\n';

	return 0;
}