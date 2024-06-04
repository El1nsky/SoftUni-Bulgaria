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
	short month; cin >> month;

	string monthN;

	switch (month)
	{
	case 1:monthN = "January"; break;
	case 2:monthN = "February"; break;
	case 3:monthN = "March"; break;
	case 4:monthN = "April"; break;
	case 5:monthN = "May"; break;
	case 6:monthN = "June"; break;
	case 7:monthN = "July"; break;
	case 8:monthN = "August"; break;
	case 9:monthN = "September"; break;
	case 10:monthN = "October"; break;
	case 11:monthN = "November"; break;
	case 12:monthN = "December"; break;
	default: monthN = "Error!"; break;
	}

	cout << monthN;

	return 0;
}