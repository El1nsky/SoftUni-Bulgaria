#include <iostream>

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

	int left = n;
	int rev = 0;
	int rev1 = 0;
	int rev2 = 0;

	int r = left % 10;
	rev = rev + r;
	left = left / 10;

	r = left % 10;
	rev1 = rev1 + r;
	left = left / 10;
	r = left % 10;
	rev2 = rev2 + r;

	for (int i = 1; i <= rev; i++)
	{
		for (int y = 1; y <= rev1; y++)
		{
			for (int w = 1; w <= rev2; w++)
			{
				cout << i << " * " << y << " * " << w << " = " << i * y * w << ";" << '\n';
			}
		}
	}

	return 0;
}