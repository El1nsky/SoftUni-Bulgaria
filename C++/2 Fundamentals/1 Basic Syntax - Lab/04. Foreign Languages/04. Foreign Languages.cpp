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
	string country; getline(cin >> ws, country);

	string language;

	if (country == "USA" ||
		country == "England")
	{
		language = "English";
	}
	else if (country == "Spain" ||
		country == "Argentina" ||
		country == "Mexico")
	{
		language = "Spanish";
	}
	else language = "unknown";

	cout << language;

	return 0;
}