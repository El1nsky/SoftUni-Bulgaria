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


class CenterPoint
{
public:
	static int getPointCloseToZero(double result1, double result2) {
		if (result1 < result2)
		{
			return -1;
		}
		else if (result2 < result1)
		{
			return 1;
		}
		return 0;
	}

	static double getFirstPoint(double x1, double y1)
	{
		return sqrt(abs(x1 * x1) + abs(y1 * y1));
	}

	static double getSecondPoint(double x2, double y2)
	{
		return sqrt(abs(x2 * x2) + abs(y2 * y2));
	}
};

int main()
{
	double x1, y1, x2, y2;
	cin >> x1 >> y1 >> x2 >> y2;

	int result = CenterPoint::getPointCloseToZero(
		CenterPoint::getFirstPoint(x1, y1),
		CenterPoint::getSecondPoint(x2, y2)
	);

	if (result < 0) 
	{
		cout << "(" << x1 << ", " << y1 << ")" << '\n';
	}
	else if (result > 0) 
	{
		cout << "(" << x2 << ", " << y2 << ")" << '\n';
	}
	else 
	{
		cout << "(" << x1 << ", " << y1 << ")" << '\n';
	}

	return 0;
}