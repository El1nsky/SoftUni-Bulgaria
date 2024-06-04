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
	int widthFree; cin >> widthFree;

	int lengthFree; cin >> lengthFree;

	int heightFree; cin >> heightFree;

	int cubicMetersFree = widthFree * lengthFree * heightFree;

	int boxes;

	string input;

	while (cubicMetersFree > 0)
	{
		getline(cin >> ws, input);

		try { boxes = stoi(input); }
		catch (const std::exception&) {}

		if (input == "Done")
		{
			cout << cubicMetersFree << " Cubic meters left.";
			return 0;
		}

		cubicMetersFree -= boxes;
	}

	cout << "No more free space! You need " << abs(cubicMetersFree) << " Cubic meters more.";

	return 0;
}