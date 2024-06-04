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

	for (int num = 1; num  <= n; num += 3)
	{
		cout << num << '\n';
	}
	return 0;
}
