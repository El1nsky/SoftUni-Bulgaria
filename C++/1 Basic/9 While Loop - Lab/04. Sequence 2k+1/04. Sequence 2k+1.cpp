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

	for (int i = 0; i <= n; i *= 2)
	{
		i++;
		
		cout << i << '\n';
	}

		return 0;
}