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
	cout << fixed << setprecision(2);

	double budged; cin >> budged;

	int overnightStaysN; cin >> overnightStaysN;

	double overnightStaysP; cin >> overnightStaysP;
	if (overnightStaysN > 7) { overnightStaysP *= 0.95; }
	overnightStaysP *= overnightStaysN;

	float expenses; cin >> expenses;
	expenses *= budged / 100.00;
	overnightStaysP += expenses;

	if (budged >= overnightStaysP)
	{
		cout << "Ivanovi will be left with " << budged - overnightStaysP
			<< " leva after vacation.";
	}
	else { cout << overnightStaysP - budged << " leva needed."; }

	return 0;
}