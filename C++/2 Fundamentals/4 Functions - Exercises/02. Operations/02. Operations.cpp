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

double add(double a, double b, double result);
double subtract(double a, double b, double result);
double multiply(double a, double b, double result);
double divide(double a, double b, double result);

int main()
{
	double a, b, result;
	char operation;

	result = 0;

	cin >> a >> b >> operation;

	switch (operation)
	{
	case '+':
		cout << add(a, b, result);
		break;
	case '-':
		cout << subtract(a, b, result);
		break;
	case '*':
		cout << multiply(a, b, result);
		break;
	case '/':
		cout << divide(a, b, result);
		break;
	}

	return 0;
}

double add(double a, double b, double result)
{
	result = a + b;

	return result;
}
double subtract(double a, double b, double result)
{
	result = a - b;

	return result;
}
double multiply(double a, double b, double result)
{
	result = a * b;

	return result;
}
double divide(double a, double b, double result)
{
	result = a / b;

	return result;
}