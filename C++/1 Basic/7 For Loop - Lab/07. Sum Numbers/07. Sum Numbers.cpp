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
	short n; cin >> n;
	long int num;
	long int sum = 0;

	for (long int i = 1; i <= n; i++)
	{
		cin >> num;
		sum += num;
	}

	cout << sum << '\n';

	return 0;
}