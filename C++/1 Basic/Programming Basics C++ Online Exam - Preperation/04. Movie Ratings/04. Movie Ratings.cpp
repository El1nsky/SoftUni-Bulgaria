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
	cout << fixed << setprecision(1);

	int filmsA = 0; cin >> filmsA;

	string filmsN;
	string lowestFilmN = "";
	string highestFilmN = "";

	double filmRating = 0;
	double filmRatingAvrg = 0;
	double lowestFilmRating = 0;
	double highestFilmRating = 0;

	for (int i = 1; i <= filmsA; i++)
	{
		getline(cin >> ws, filmsN);
		cin >> filmRating;

		if (filmRating > highestFilmRating) { highestFilmRating = filmRating; highestFilmN = filmsN; }
		else { lowestFilmRating = filmRating; lowestFilmN = filmsN; }
		filmRatingAvrg += filmRating;
	}

	cout << highestFilmN << " is with highest rating: " << highestFilmRating << '\n'
		<< lowestFilmN << " is with lowest rating: " << lowestFilmRating << '\n'
		<< "Average rating: " << filmRatingAvrg / (double)filmsA;

	return 0;
}