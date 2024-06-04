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
	string action;

	int steps = 0;
	int goal = 0;
	int stepsOver = 0;

	while (goal <= 10000)
	{
		getline(cin >> ws, action);

		try
		{
			steps = stod(action);
		}
		catch (const std::exception&)
		{
		}

		if (action == "Going home") { break; }

		goal += steps;
	}

	if (goal < 10000) 
	{
		getline(cin >> ws, action);

		try
		{
			steps = stod(action);
		}
		catch (const std::exception&)
		{
		}

		goal += steps;

		if (goal <10000) 
		{
			cout << 10000 - goal << " more steps to reach goal.";
			return 0;
		}
		else if (goal >= 10000)
		{
			cout << "Goal reached! Good job!";
			//cout << goal - 10000 << " steps over the goal!";
			return 0;
		}	
	}

	cout << "Goal reached! Good job!";
	//cout << goal - 10000 << " steps over the goal!";

	return 0;
}