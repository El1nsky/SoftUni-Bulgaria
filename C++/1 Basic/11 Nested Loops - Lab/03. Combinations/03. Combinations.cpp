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
	short n; cin >> n;

	short count = 0;

	for (short x1 = 0; x1 <= n; x1++) {
		for (short x2 = 0; x2 <= n; x2++) {
			for (short x3 = 0; x3 <= n; x3++) {
				if (x1 + x2 + x3 == n) {
					count++;
				}
			}
		}
	}

	cout << count << '\n';

	return 0;
}