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

	int juryCount; cin >> juryCount;

	string presentationName; getline(cin >> ws, presentationName);

	int presentationCount = 0;

	double totalGradeSum = 0;
	double averageGrade = 0;
	double finalAverageGrade = 0;
	double presentationGradeSum = 0;
	double grade = 0;

	while (presentationName != "Finish")
	{
		presentationGradeSum = 0;

		for (int i = 0; i < juryCount; i++)
		{
			cin >> grade;

			presentationGradeSum += grade;
		}

		averageGrade = presentationGradeSum / juryCount;
		cout << presentationName << " - " << averageGrade << '.' << '\n';

		totalGradeSum += presentationGradeSum;
		presentationCount++;

		getline(cin >> ws, presentationName);
	}

	finalAverageGrade = totalGradeSum / (juryCount * presentationCount);

	cout << "Student's final assessment is " << finalAverageGrade << '.' << '\n';

	return 0;
}