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

using namespace std;

int main()
{
	cout << fixed << setprecision(1);
	
	string actorName; getline(cin >> ws, actorName);
	string criticName;

	double academyPts; cin >> academyPts;
	float criticPts = 0;
	float goal = 1250.5;

	short critics; cin >> critics;

	for (short i = 0; i < critics; i++)
	{
		getline(cin >> ws, criticName);
		cin >> criticPts;

		academyPts += ((criticName.length() * criticPts) / 2);

		if (academyPts > goal)
		{
			cout << "Congratulations, " << actorName << " got a nominee for leading role with " << academyPts << '!';
			return 0;
		}
	}

	cout << "Sorry, " << actorName << " you need " << goal - academyPts << " more!";

	return 0;
}