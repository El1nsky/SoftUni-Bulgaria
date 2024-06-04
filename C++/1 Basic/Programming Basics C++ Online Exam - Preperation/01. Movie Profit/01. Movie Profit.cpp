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
	string movieName; getline(cin >> ws, movieName);

	short daysN; cin >> daysN;

	int ticketsN; cin >> ticketsN;

	double ticketP; cin >> ticketP;

	double cinemaPercent; cin >> cinemaPercent;

	double profit = daysN * (ticketsN * ticketP) - daysN * (ticketsN * ticketP) * (cinemaPercent / 100);

	cout << fixed << setprecision(2);
	cout << "The profit from the movie " << movieName << " is " << profit << " lv.";

	return 0;
}