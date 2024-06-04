#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <fstream>
#include <vector>
#include <cmath>
#include <math.h>
#include <numeric>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <list>
#include <map>
#include <climits> 
#include <stdlib.h>

using namespace std;

int main() {
	int n, sum, temp, digit, factorial;

	cin >> n;

	sum = 0;
	temp = n;

	while (n)
	{
		digit = n % 10;
		factorial = 1;

		for (int i = 1; i <= digit; i++)
		{
			factorial *= i;
		}

		sum += factorial;
		n /= 10;
	}

	if (sum == temp) cout << "yes";
	else cout << "no";

	return 0;
}