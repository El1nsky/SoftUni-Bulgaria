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
	string destination; 

	double budged;
	double savings = 0;
	double input = 0;

	while (true)
	{
		getline(cin >> ws, destination); if (destination == "End") { return 0; }

		cin >> budged;

		while (savings <= budged)
		{
			cin >> input; savings += input;

			if (savings >= budged)
			{
				cout << "Going to " << destination << '!' << '\n';

				budged = 0;
				savings = 0;
				break;
			}
		}
	}

	return 0;
}