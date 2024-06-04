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
	int n; cin >> n;
	int sum = 0;

	for (short i = 1; i <= 10; i++)
	{
		sum = n * i;
		cout << n << " X " << i << " = " << sum << '\n';
	}

	return 0;
}