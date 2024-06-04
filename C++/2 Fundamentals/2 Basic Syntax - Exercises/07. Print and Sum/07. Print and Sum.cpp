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
	int a, b, sum;

	sum = 0;

	cin >> a >> b;

	for (short i = a; i <= b; i++)
	{
		sum += i;
		cout << i << ' ';
	}

	cout << '\n' << "Sum: "<< sum;

	return 0;
}