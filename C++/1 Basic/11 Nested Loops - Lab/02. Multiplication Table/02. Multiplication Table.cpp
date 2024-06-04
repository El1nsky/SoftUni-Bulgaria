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
#include <climits> 

using namespace std;

int main()
{
	short sum;

	for (short i = 1;i <= 10; i++)
	{
		for (short j = 1; j <=10; j++)
		{
			sum = i * j;

			cout << i << " * " << j << " = " << sum << '\n';
		}
	}

	return 0;
}