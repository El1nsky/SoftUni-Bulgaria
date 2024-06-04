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

int main()
{
	int n;

	cin >> n;

	int oddNumber = 1;
	int sum = 0;

	for (int i = 0; i < n; ++i)
	{
		cout << oddNumber << '\n';

		sum += oddNumber;

		oddNumber += 2;
	}

	cout << "Sum: " << sum;

	return 0;
}