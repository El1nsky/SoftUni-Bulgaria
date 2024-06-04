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
#include <cctype>

using namespace std;

float orderPrice(string productN, float productP, unsigned short quantity);

int main()
{
	cout << fixed << setprecision(2);

	string productN;

	unsigned short quantity;

	float productP;

	cout << orderPrice(productN, productP, quantity);

	return 0;
}
float orderPrice(string productN, float productP, unsigned short quantity)
{
	cin >> productN >> quantity;

	if (productN == "coffee") productP = 1.50;
	else if (productN == "water") productP = 1.00;
	else if (productN == "coke") productP = 1.40;
	else productP = 2.00;

	float total = productP * quantity;

	return total;
}
