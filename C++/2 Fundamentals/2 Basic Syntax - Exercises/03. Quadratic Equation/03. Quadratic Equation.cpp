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
	double a, b, c;
	cin >> a >> b >> c;

	double discriminant = b * b - 4 * a * c;

	if (discriminant < 0) cout << "no roots";

	else if (discriminant == 0)
	{
		double root = -b / (2 * a);
		cout << root;
	}
	else
	{
		double root1 = (-b + sqrt(discriminant)) / (2 * a);
		double root2 = (-b - sqrt(discriminant)) / (2 * a);
		cout << root1 << " " << root2;
	}

	return 0;
}