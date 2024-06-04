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
	short badGradesLimit; cin >> badGradesLimit;

	string taskName; getline(cin >> ws, taskName);

	short currentGrade;
	short goodGrades = 0;
	short badGradesCounter = 0;
	float sumGrades = 0;
	float averageGrade = 0;

	string lastProblem;

	cout << fixed << setprecision(2);

	while (taskName != "Enough")
	{
		cin >> currentGrade;

		goodGrades++;
		sumGrades += currentGrade;
		lastProblem = taskName;

		if (currentGrade <= 4) { badGradesCounter++; }

		if (badGradesCounter == badGradesLimit)
		{
			cout << "You need a break, " << badGradesLimit << " poor grades.";
			return 0;
		}

		getline(cin >> ws, taskName);
	}

	averageGrade = sumGrades / goodGrades;

	cout << "Average score: " << averageGrade << '\n';
	cout << "Number of problems: " << goodGrades << '\n';
	cout << "Last problem: " << lastProblem;

	return 0;
}