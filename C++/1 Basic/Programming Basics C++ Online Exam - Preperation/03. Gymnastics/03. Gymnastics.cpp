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
	cout << fixed;

	string country; getline(cin >> ws, country);
	string device; cin >> device;

	double difficulty = 0;
	double performance = 0;
	double totalPoints = 0;
	double percent = 0;

	if (country == "Bulgaria")
	{
		if (device == "ribbon")
		{
			difficulty = 9.600;
			performance = 9.400;
		}
		else if (device == "hoop")
		{
			difficulty = 9.550;
			performance = 9.750;
		}
		else
		{
			difficulty = 9.500;
			performance = 9.400;
		}
	}

	if (country == "Russia")
	{
		if (device == "ribbon")
		{
			difficulty = 9.100;
			performance = 9.400;
		}
		else if (device == "hoop")
		{
			difficulty = 9.300;
			performance = 9.800;
		}
		else
		{
			difficulty = 9.600;
			performance = 9.000;
		}
	}

	if (country == "Italy")
	{
		if (device == "ribbon")
		{
			difficulty = 9.200;
			performance = 9.500;
		}
		else if (device == "hoop")
		{
			difficulty = 9.450;
			performance = 9.350;
		}
		else
		{
			difficulty = 9.700;
			performance = 9.150;
		}
	}
	totalPoints = difficulty + performance;
	percent = ((20 - totalPoints) / 20) * 100;

	cout << "The team of " << country << " get "
		<< setprecision(3) << totalPoints << " on " << device
		<< '.' << setprecision(2) << '\n' << percent << '%';

	return 0;
}
//Useful shortcuts for Visual Studio Community:
/*
1: Ctrl M + L: collapse or expand all.
2: Ctrl M + M: collapse or expand selected.
*/

//Useful functions:
/*
Multiplatform console text clear
Multiplatform console text clear

void ClearConsole()
{
#if defined(_WIN32)
	std::system("CLS");
#elif defined(__linux__) || defined(__unix__) || defined(__APPLE__)
	std::system("clear");
#endif
}
*/