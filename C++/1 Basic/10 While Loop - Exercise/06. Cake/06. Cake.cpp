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


	int height; cin >> height;

	int width; cin >> width;

	string action;

	int pcsTaken;

	int cakePcs = height * width;

	while (cakePcs >= 0)
	{


		getline(cin >> ws, action);

		try
		{
			pcsTaken = stoi(action);
		}
		catch (const std::exception&)
		{

		}

		if (action == "STOP")
		{
			cout << cakePcs << " pieces are left.";

			return 0;
		}

		cakePcs -= pcsTaken;
	}

	cout << "No more cake left! You need " << abs(cakePcs) << " pieces more.";

	return 0;
}