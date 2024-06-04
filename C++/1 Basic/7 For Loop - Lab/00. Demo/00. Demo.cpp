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
	int n; cin >> n;

	short num = 1;

	for (short i = 0; i <= n; i += 2)
	{
		cout << num << '\n';

		num *= 2 * 2;
	}

	return 0;
}