#define _USE_MATH_DEFINES

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <cmath>
#include <math.h>

using namespace std;

int main()
{
	float movieBudged; cin >> movieBudged;

	short extrasN; cin >> extrasN;

	float extrasApparelP; cin >> extrasApparelP;
	extrasApparelP *= extrasN;

	if (extrasN > 150) { extrasApparelP -= extrasApparelP * 0.10f; }

	float movieDecor = movieBudged * 0.10f;

	if (movieBudged < movieDecor + extrasApparelP)
	{
		cout << "Not enough money!\nWingard needs " << fixed << setprecision(2) << abs(movieBudged - (movieDecor + extrasApparelP)) << " leva more.";
	}
	else
	{
		cout << "Action!\nWingard starts filming with " << fixed << setprecision(2) << movieBudged - (movieDecor + extrasApparelP) << " leva left.";
	}

	return 0;
}