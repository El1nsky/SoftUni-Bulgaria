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
	short tournamentsN; cin >> tournamentsN;

	int startingPts; cin >> startingPts;

	string tournamentStage;

	int tournamentPts = 0;
	short avrgPts = 0;
	short tournamentWon = 0;
	short tournamentCount = 0;

	for (short i = 1; i <= tournamentsN; i++)
	{
		getline(cin >> ws, tournamentStage);

		tournamentCount = i;

		if (tournamentStage == "W") { tournamentWon++; }
		if (tournamentStage == "W") { tournamentPts += 2000; }
		else if (tournamentStage == "F") { tournamentPts += 1200; }
		else { tournamentPts += 720; }

	}

	tournamentPts += startingPts;
	avrgPts = (tournamentPts - startingPts) / tournamentCount;

	cout << fixed << setprecision(2);
	cout << "Final points: " << tournamentPts << '\n';
	cout << "Average points: " << avrgPts << '\n';
	cout << (float)tournamentWon / tournamentCount * 100 << "%";

	return 0;
}