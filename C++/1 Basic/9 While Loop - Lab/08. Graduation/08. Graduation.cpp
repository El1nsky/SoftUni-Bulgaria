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
	string studentName; cin >> studentName;

	short gradesN = 0;
	double avrgGrades = 0;
	double currentGrades = 0;
	double totalGrades = 0;

	cout << fixed << setprecision(2);

	while (gradesN < 12)
	{
		cin >> currentGrades;

		gradesN++;
		totalGrades += currentGrades;

		if (currentGrades < 4)
		{
			cin >> currentGrades;
			cout << studentName << " has been excluded at " << gradesN << " grade";
			return 0;
		}
	}

	avrgGrades = (double)totalGrades / gradesN;

	cout << studentName << " graduated. Average grade: " << avrgGrades;

	return 0;
}