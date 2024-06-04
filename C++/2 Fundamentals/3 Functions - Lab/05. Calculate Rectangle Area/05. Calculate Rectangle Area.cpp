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

short rectangleArea();

int main()
{

	cout << rectangleArea();

	return 0;
}

short rectangleArea()
{
	short a, b;

	cin >> a >> b;

	short area = a * b;

	return area;
}